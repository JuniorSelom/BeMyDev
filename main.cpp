#include <iostream>

#include "h/Hackathon.h"
#include "h/Display.h"

#include <stdio.h>


using namespace std;

int main() {

    int i;
    cout << "Selectionnez une action" << endl;
    cout << "1\tAjouter un Hackathon" << endl;
    cout << "2\tAjouter une étape" << endl;
    cout << "3\tAjouter une équipe" << endl;
    cout << "4\tRentrer les notes" << endl;
    cout << endl << endl << "0\tQuitter" << endl;
    cin >> i;

    cout << i << endl;

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

    t1.addNote(12);
    t1.addNote(13);


    Team t2("Team 2");
    User u3("Lacraps", "RAP");
    User u4("Davodka", "RAP");
    User u5("GYS", "RAP");
    User u6("Tot", "RAP");
    User u7("Tat", "RAP");

    //t2.members didnt work
    t2.members.push_back(u3);
    t2.members.push_back(u4);
    t2.members.push_back(u5);

    t2.addMember(u3);
    t2.addMember(u4);
    t2.addMember(u5);
    t2.addMember(u6);
    t2.addMember(u7);

    Team t3("Team 3");
    User u8("bbo", "tt");
    User u9("bfokbo", "tt");
    User u10("bpokbo", "tt");
    User u11("qwd", "tt");
    User u12("ca", "tt");
    User u13("gerv", "tt");
    User u14("csdr", "tt");
    t3.addMember(u8);
    t3.addMember(u9);
    t3.addMember(u10);
    t3.addMember(u11);
    t3.addMember(u12);
    t3.addMember(u13);
    t3.addMember(u14);

    // Ajout des teams au hackathon
    hackathon.teams.push_back(t1);
    hackathon.teams.push_back(t2);
    hackathon.teams.push_back(t3);

    cout << "nb member in team 1: " << hackathon.teams[0].nbMembers << endl;

    std::cout << "nb t1: " << t1.nbMembers << std::endl;
    std::cout << "coef t1: " << t1.coef << std::endl;

    std::cout << "nb t2: " << t2.nbMembers << std::endl;
    std::cout << "coef t2: " << t2.coef << std::endl;

    std::cout << "nb t3: " << t3.nbMembers << std::endl;
    std::cout << "coef t3: " << t3.coef << std::endl;

    std::cout << "moyenne t1: " << t1.getMoyenne() << std::endl;

    Display::tata();
    return 0;
}