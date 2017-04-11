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


    Hackathon(const string &name);

    virtual ~Hackathon();

public:
    string name;
    vector<Team> teams;
    vector<Etape> etapes;
    Resultat resultat;

    void addTeam(string name );
    void addEtape(int dureeMax, int ordre );

};


#endif //UNTITLED1_HACKATHON_H
