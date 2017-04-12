//
// Created by Francois Devove on 11.04.17.
//

#ifndef BEMYDEV_DISPLAY_H
#define BEMYDEV_DISPLAY_H


#include "Hackathon.h"

class Display {
public :
    static void tata();

    static Hackathon createHackathon();

    static void createStep(vector<Hackathon, allocator<Hackathon>>& hackathons);
};


#endif //BEMYDEV_DISPLAY_H
