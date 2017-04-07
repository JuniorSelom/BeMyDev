#include <iostream>

#include "h/Hackathon.h"
#include <stdio.h>


using namespace std;

int main() {

    Hackathon hackathon;
    Etape etape;
    etape.ordre = 1;

    hackathon.etapes.push_back(etape);

    cout << hackathon.etapes[0].ordre << endl;



    return 0;
}