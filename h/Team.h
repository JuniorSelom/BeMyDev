//
// Created by Selom Viadenou on 06/04/2017.
//

#ifndef UNTITLED1_TEAM_H
#define UNTITLED1_TEAM_H


#include "User.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Team {
public:
    Team(const std::string &nom);
    void Add(User &user);
    void CalculCoefficien();

public:
    string nom;
    vector<User> members;
    float coefficient;

    int note[];


};


#endif //UNTITLED1_TEAM_H
