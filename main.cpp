#include <iostream>

#include "h/Hackathon.h"

#include <stdio.h>


using namespace std;

int main() {

    Hackathon hackathon;

    // Création des étapes
    Etape e1(1, 3);
    Etape e2(2, 4);
    Etape e3(3, 5);

    // Ajout des etapes au hackathon
    hackathon.etapes.push_back(e1);
    hackathon.etapes.push_back(e2);
    hackathon.etapes.push_back(e3);

    // Création des teams
    Team t1("Team 1");
    User u1("JUL", "Variété");
    User u2("PNL", "Variété");
    // Ajout des membres à la team
    t1.addMember(u1);
    t1.addMember(u2);

    Team t2("Team 2");
    User u3("Lacraps", "RAP");
    User u4("Davodka", "RAP");
    User u5("GYS", "RAP");

    t2.members.push_back(u3);
    t2.members.push_back(u4);
    t2.members.push_back(u5);

    // Ajout des teams au hackathon
    hackathon.teams.push_back(t1);
    hackathon.teams.push_back(t2);

    cout << hackathon.teams[0].nbMembers << endl;



    return 0;
}