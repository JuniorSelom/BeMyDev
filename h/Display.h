//
// Created by Francois Devove on 11.04.17.
//

#ifndef BEMYDEV_DISPLAY_H
#define BEMYDEV_DISPLAY_H


#include "Hackathon.h"

class Display {
public :

    static Hackathon createHackathon();

    static void createStep(vector<Hackathon>& hackathons);

    static void displayAddEquipe(vector<Hackathon>& h);

    static void displayEnterNote(vector<Hackathon>& h);

    static void displayAddMember(vector<Hackathon>& hackathons);

    static void printAllMembers(vector<Hackathon> hackathons);

};


#endif //BEMYDEV_DISPLAY_H
