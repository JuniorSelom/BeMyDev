//
// Created by Selom Viadenou on 06/04/2017.
//

#include "h/Team.h"


Team::Team(const std::string &nom_) {
    nom = nom_;
    nbMembers = 0;
    coef = 0;
}

void Team::addMember(const User u) {
    members.push_back(u);
    nbMembers++;
    coef = ((nbMembers - 5) * 0.05) + 1;
}





