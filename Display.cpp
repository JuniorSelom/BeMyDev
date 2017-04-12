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
    cout << "Vous avez créée le hackathon '" << name << "'" << endl << endl;
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
    hackathons[idHackathon - 1].etapes.push_back(e);

    cout << "L'étape n°" << hackathons[idHackathon - 1].etapes.size() + 1 << " d'une durée de " << time << "h a bien été créée." << endl << endl;
}

void Display::displayAddEquipe(vector<Hackathon>& h) {
    // std::cout << "TEAMS ? " << h[0].teams[0].nom << std::endl;
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
    std::cout << "hackathonSelected " << hackathonSelected << std::endl;
    std::cout << "h.size() " << h.size() << std::endl;
    if (hackathonSelected > h.size()) {
        std::cout << "Votre choix n'est pas valide merci de recommencer !" << std::endl;
    } else {
        std::cout << "Entrez le nom de l'équipe a ajouter pour le hackathon: " << h[hackathonSelected].name << std::endl;
        std::string name;
        std::cin >> name;
        // addteam in hackathon
        h[hackathonSelected].addTeam(name);
        std::cout << "NB TEAMS ? " << h[0].teams.size() << std::endl;
        std::cout << "TEAMS ? " << h[0].teams[0].nom << std::endl;
    }
}

void Display::displayEnterNote(vector<Hackathon>& h) {
    std::cout << "--- Ajouter des notes ---" << std::endl;
    std::cout << "Liste des hackathon: " << std::endl;
    // list hackathon
    for (int i = 0; i < h.size(); ++i) {
        std::cout << i << " : " << h[i].name << std::endl;
    }
    std::cout << "\tselectionnez votre hackathon: " << std::endl;
    int hackathonSelected;
    std::cin >> hackathonSelected;
    std::cout << "hackathonSelected " << hackathonSelected << std::endl;
    if (hackathonSelected > h.size()) {
        std::cout << "Votre choix n'est pas valide merci de recommencer !" << std::endl;
    } else if(h[hackathonSelected].teams[0].theNotes.size() == h[hackathonSelected].etapes.size()) {
        cout << "Les notes de toutes les étapes ont été enregistrées." << endl;
    } else {
        // loop on teams of this hackathon
        float note;
        for (int j = 0; j < h[hackathonSelected].teams.size(); ++j) {
            std::cout << "Note de l'équipe " << j << " - " << h[hackathonSelected].teams[j].nom << " : " << std::endl;
            std::cin >> note;
            //add note
            h[hackathonSelected].teams[j].addNote(note);
        }

        for (int k = 0; k < h[hackathonSelected].teams.size(); ++k) {
            std::cout << "Moyenne de l'équipe " << k << " - " << h[hackathonSelected].teams[k].getMoyenne() << std::endl;
        }
    }
}

void Display::displayAddMember(vector<Hackathon>& hackathons) {

    cout << "Sélectionnez le hackathon dans lequel va évoluer ce membre" << endl;
    int idxHackathon;
    int idxTeam;
    int i = 1;
    for(auto &h : hackathons) {
        cout << i << "\t" << h.name << endl;
        i++;
    }
    cin >> idxHackathon;

    cout << "Sélectionnez l'équipe dont ce membre fait parti" << endl;
    i = 1;
    for(auto &t : hackathons[idxHackathon - 1].teams) {
        cout << i << "\t" << t.nom << endl;
        i++;
    }
    cin >> idxTeam;

    string memberName;
    cout << "Nom du participant : ";
    cin >> memberName;

    hackathons[idxHackathon - 1].teams[idxTeam - 1].addMember(User(memberName));
}

void Display::printAllMembers(vector<Hackathon> hackathons) {
    for(auto &h : hackathons) {
        cout << h.name << " :" << endl;
        for (auto &t : h.teams) {
            cout << "\t" << t.nom << " (Moyenne : " << t.getMoyenne() << " :" << endl;
            for (auto &m : t.members) {
                cout << "\t\t" << m.nom << endl;
            }
            cout << endl;
        }
        cout << endl;
    }
}