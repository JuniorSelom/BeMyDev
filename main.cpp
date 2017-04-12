#include <iostream>

#include "h/Hackathon.h"
#include "h/Display.h"

#include <stdio.h>


using namespace std;

int main() {

    vector<Hackathon> hackathons;

    bool isInUse = true;
    while(isInUse) {

        int i;
        cout << "Selectionnez une action" << endl;
        cout << "1\tAjouter un Hackathon" << endl;
        cout << "2\tAjouter une étape" << endl;
        cout << "3\tAjouter une équipe" << endl;
        cout << "4\tAjouter un participant" << endl;
        cout << "5\tEntrer les notes" << endl;
        cout << "6\tAfficher tous les membres" << endl;
        cout << endl << "0\tQuitter" << endl;
        cin >> i;

        switch(i){
            case 1:
                hackathons.push_back(Display::createHackathon());
                break;
            case 2:
                Display::createStep(hackathons);
                break;
            case 3:
                Display::displayAddEquipe(hackathons);
                break;
            case 4:
                Display::displayAddMember(hackathons);
                break;
            case 5:
                Display::displayEnterNote(hackathons);
                break;
            case 6:
                Display::printAllMembers(hackathons);
                break;
            case 0:
                isInUse = false;
                break;
            default:
                break;
        }
    }

    cout << endl << "@ Merci à très bientôt, la fantastique équipe de Dev, Nicolas, Selom et François" << endl;

    return 0;
}