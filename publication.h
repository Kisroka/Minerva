#ifndef PUBLICATION_H
#define PUBLICATION_H
#include <string>
#include <iostream>

using namespace std;

class Publication
{


protected:
    string ID;
    string Title;
    string Publisher;
    int Amount;
public:

    virtual string getID();
    virtual string getTitle();
    virtual string getPublisher();

};

class Book: public Publication{
    int ISBN;
    static const int MaxRentTime = 28;  //hogy ne magic muber legyen lesz egy kis adatfile ahol az admin tudja állítgatni, hogy mennyi legyen és onnan kapja majd meg
public:
    int getISBN();
};

class Magazine: public Publication{
    int ISSN;
    static const int MaxRentTime = 7;
public:
    int getISSN();
};


#endif // PUBLICATION_H
