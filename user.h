#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
#include <list>
#include "publication.h"

#endif // USER_H

using namespace std;

class User
{
    string Name;
    string Role;
    int User_Id;
public:

    virtual ~User();
    virtual string getName();
    virtual string getRole();
    virtual int getUser_Id();
};

class Member: public User{
    int Balance;
    list<Publication> Rents;
public:
    int getBalance();
};

class Staff: public User{

};

class Admin: public User{

};
