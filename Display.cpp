//
// Created by Francois Devove on 11.04.17.
//

#include "h/Display.h"
#include <iostream>

void Display::tata() {
    std::cout << "OTOTOT" << std::endl;
}

void Display::displayAddEquipe(vector<Hackathon> h) {
    std::string name;
    std::cout << "--- Ajouter une équipe ---" << std::endl;
    std::cout << "Liste des hackathon: " << std::endl;
    // list hackathon
    for (int i = 0; i < h.size(); ++i) {
        std::cout << i << " : " << h[i].name << std::endl;
    }
    std::cout << "\tselectionnez votre hackathon: " << std::endl;
    int hackathonSelected;
    // select hackathon
    std::cin >> hackathonSelected;
    // enter name team
    std::cout << "Entrez le nom de l'équipe a ajouter pour le hackathon: " << h[hackathonSelected].name << std::endl;
    std::cin >> name;
    // addteam in hackathon
    h[hackathonSelected].addTeam(name);

    // TO DO : call main menu
}