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

public:
    string nom;
    vector<User> members;
    double coefficient;
    int nbMembers;
    float coef;

    // int notes[];
    vector<int> theNotes;

    void addMember(const User u);

    float addNote(int note);
    float getMoyenne();
};


#endif //UNTITLED1_TEAM_H
