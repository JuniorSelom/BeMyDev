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



    virtual ~Hackathon();

public:
    vector<Team> teams;
    vector<Etape> etapes;
    Resultat resultat;

};


#endif //UNTITLED1_HACKATHON_H
