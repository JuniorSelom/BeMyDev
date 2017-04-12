//
// Created by Selom Viadenou on 06/04/2017.
//

#include "h/Team.h"


Team::Team(const std::string &nom_, int uid_) {
    nom = nom_;
    nbMembers = 0;
    coef = 0;
    uid = uid_;
}

void Team::addMember(const User u) {
    members.push_back(u);
    nbMembers++;
    coef = ((5 - nbMembers) * 0.05) + 1;
}

float Team::addNote(float note) {
    theNotes.push_back(note);
}

float Team::getMoyenne() {
    float moyenne = 0;
    for(int i : theNotes)
        moyenne += i * coef;
    return moyenne /theNotes.size();
}



