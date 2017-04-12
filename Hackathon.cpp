//
// Created by Selom Viadenou on 06/04/2017.
//

#include "h/Hackathon.h"





Hackathon::~Hackathon() {



}

Hackathon::Hackathon(const string &name_)  {
    name = name_;
}


void Hackathon::addTeam(string name ) {
    long size = teams.size();
    size + 1;
    Team t(name,size);
    teams.push_back(t);
}

void Hackathon::addEtape(int dureeMax, int ordre ) {
    Etape e(dureeMax,ordre);
    etapes.push_back(e);
}
