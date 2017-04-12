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
    for(int i = 0; i < hackathons.size(); i++) {
        cout << i+1 << "\t" << hackathons[i].nom << endl;
    }
    int idHackathon;
    cin >> idHackathon;
    cout << "Combien de temps dure cette étape ? (écrire la valeur en heures : 3 => 3h, 3,5 => 3h30)" << endl;
    int time;
    cin >> time;
    Etape e(time, hackathons[idHackathon-1].etapes.size()+1);
    cout << "GOOD" << endl;
    hackathons[idHackathon-1].etapes.push_back(e);
    cout << "GOOD TOO" << endl;
}