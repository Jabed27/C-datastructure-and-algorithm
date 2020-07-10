#ifndef PEOPLE_H
#define PEOPLE_H
#include<string>
#include "Birthday.h"


using namespace std;
class People
{
    public:
        People(string n,Birthday ob);
        void printinfo();


    private:

        string name;
        Birthday dateOfbirth;
};

#endif // PEOPLE_H
