//
// Created by Francois Devove on 11.04.17.
//

#include "h/Display.h"
#include "h/Hackathon.h"
#include <iostream>
#include <string>
using namespace std;

void Display::tata() {
    std::cout << "OTOTOT" << std::endl;
}

Hackathon Display::createHackathon() {
    cout << "Entrez le nom de ce hackathon" << endl;
    string name;
    cin >> name;
    Hackathon h(name);
    return h;
}

void Display::createStep(vector<Hackathon>& hackathons) {
    cout << "A quel Hackathon cette étape est elle reliée ?" << endl;
    for (int i = 0; i < hackathons.size(); i++) {
        cout << i + 1 << "\t" << hackathons[i].name << endl;
    }
    int idHackathon;
    cin >> idHackathon;
    cout << "Combien de temps dure cette étape ? (écrire la valeur en heures : 3 => 3h, 3,5 => 3h30)" << endl;
    int time;
    cin >> time;
    Etape e(time, hackathons[idHackathon - 1].etapes.size() + 1);
    cout << "GOOD" << endl;
    hackathons[idHackathon - 1].etapes.push_back(e);
    cout << "GOOD TOO" << endl;
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