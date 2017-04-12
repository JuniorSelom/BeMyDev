//
// Created by Selom Viadenou on 06/04/2017.
//

#ifndef UNTITLED1_HACKATHON_H
#define UNTITLED1_HACKATHON_H

#include "Step.h"
#include "Team.h"
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
    vector<Step> etapes;

    void addTeam(string name );

};


#endif //UNTITLED1_HACKATHON_H
