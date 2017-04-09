//
// Created by Selom Viadenou on 06/04/2017.
//

#ifndef UNTITLED1_USER_H
#define UNTITLED1_USER_H


#include <string>
#include <stdio.h>


class User {
public:
    User(const std::string &nom, const std::string &prenom);

public:
    std::string nom;
    std::string prenom;

    //virtual ~User();

};


#endif //UNTITLED1_USER_H
