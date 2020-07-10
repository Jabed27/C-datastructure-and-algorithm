#include "People.h"
#include <iostream>
#include "Birthday.h"
using namespace std;
People::People(string  n,Birthday ob)
: name(n),dateOfbirth(ob)
{
}
void People::printinfo(){

        cout<< name <<"was born";
        dateOfbirth.Printbirthday();
}
