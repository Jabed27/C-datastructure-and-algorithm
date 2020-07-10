#include "Birthday.h"
#include <iostream>
#include "People.h"
using namespace std;

Birthday::Birthday(int d,int m,int y)
{
       month = m;
       day = d;
       year = y;
}
void Birthday::Printbirthday(){

            cout << day<<"/"<<month<<"/"<<year<<endl;

}
