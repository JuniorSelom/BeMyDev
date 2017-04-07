//
// Created by Selom Viadenou on 06/04/2017.
//

#include "h/Team.h"


Team::Team(const std::string &nom_) {
    nom = nom_;
    coefficient = 0.8;
}

void Team::Add(User &user) {
    this->members.push_back(user);
    CalculCoefficien();
}

void Team::CalculCoefficien() {
    coefficient = 0.8;
    for(int i = 1 ; i < this->members.size();i++){
        coefficient = coefficient + 0.05;
    }
}





