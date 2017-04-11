//
// Created by Selom Viadenou on 06/04/2017.
//

#ifndef UNTITLED1_HACKATHON_H
#define UNTITLED1_HACKATHON_H

#include "Etape.h"
#include "Team.h"
#include "Resultat.h"
#include <iostream>
#include <vector>

using namespace std;

class Hackathon {


public:


    Hackathon(const string &nom);

    virtual ~Hackathon();

public:
    string nom;
    vector<Team> teams;
    vector<Etape> etapes;
    Resultat resultat;

    void addTeam(const Team t);
    void addEtape(const Etape e);

};


#endif //UNTITLED1_HACKATHON_H
