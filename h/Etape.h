//
// Created by Selom Viadenou on 06/04/2017.
//

#ifndef UNTITLED1_ETAPE_H
#define UNTITLED1_ETAPE_H


class Etape {

public:
    int dureeMax;
    int ordre;

    virtual ~Etape();

    Etape(int dureeMax, int ordre);
};


#endif //UNTITLED1_ETAPE_H
