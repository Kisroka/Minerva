#ifndef EXTDATA_H
#define EXTDATA_H

#include <iostream>
#include <fstream>

using namespace std;

class ExtData{
    fstream file; //egyelőre tároljuk CSV -ként az adatokat, ha lesz xml akkor majd struktúránként kéne beolvasni de ezt tartsuk meg extrának és ha minden más megvan csak akkor piszkáljuk
public:
    ExtData(fstream filename);

    // ide jöhetnek a methodok amik ellenőriznek egy egy sort hogy nem-e bullshit van benn beolvasás után vagy kiírás előtt ill kezelik az esetleges exceptionokat
}

#endif // EXTDATA_H
