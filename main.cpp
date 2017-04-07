#include <iostream>

#include "h/Hackathon.h"
#include <stdio.h>


using namespace std;

int main() {

    User selom = User("Selom","Viadenou");
    User user2 = User("Selom","Viadenou");
    User usee3 = User("Selom","Viadenou");
    User user4 = User("Selom","Viadenou");
    User user5 = User("Selom","Viadenou");


    Team team = Team("Lol");
    team.Add(selom);
    cout << team.members.size()<<endl;
    cout << team.coefficient<<endl;
    team.Add(usee3);
    cout << team.members.size()<<endl;
    cout << team.coefficient<<endl;

    team.Add(user2);
    cout << team.members.size()<<endl;
    cout << team.coefficient<<endl;

    team.Add(user4);
    cout << team.members.size()<<endl;
    cout << team.coefficient<<endl;

    team.Add(user5);
    cout << team.members.size()<<endl;
    cout << team.coefficient<<endl;


    return 0;
}