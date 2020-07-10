#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main()
{
      Birthday birthdayob(27,01,1997);
      People Peopleob("Jabed Baadsha",birthdayob);
      Peopleob.printinfo();
    return 0;
}
