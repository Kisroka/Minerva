#ifndef LIBRARY_H
#define LIBRARY_H
#include <list>
#include "publication.h"
#include "user.h"

using namespace std;

class Library{
    static string UserFile;
    static string PublicationFile;
    static string RentsFile;
    User LoggedInUser;

public:
    Library(string UF, string PF, string RF);

    User Login(string UserName, string Password);
}

#endif // LIBRARY_H
