#include <iostream>
#include <iterator>
#include <map>
#include<vector>
using namespace std;
int main()
{
    int same;
    int counter1 =0;
    int counter2 =0;
    int counter3 =0;
    int counter4 =0;
    int counter5 =0;
    int counter6 =0;
    int counter7 =0;
    int counter8 =0;
    int counter10 =0;
    map<string,int>m;
    vector<int>vec;
      map<string,int>::iterator it;
    m["1"] = 1;
    m["2"] = 2;
     m["3"] = 2;
      m["4"] = 3;
   m["5"] = 3;
    m["6"] = 3;
     m["7"] = 1;
      m["8"] = 10;

    for( it=m.begin();it!=m.end();it++){
       same = it->second;
       if(same==1){
        counter1=counter1+1;
       }
      if(same==2){
        counter2 = counter2+1;
      }
      if(same==3){
        counter3 = counter3+1;
      }
      if(same==4){
        counter4 = counter4+1;
      }
      if(same==5){
        counter5 = counter5+1;
      }
      if(same==6){
        counter6 = counter6+1;
      }
      if(same==7){
        counter7 = counter7+1;
      }
      if(same==10){
        counter10 = counter10+1;
      }
    }
    cout<<"1 is = "<<counter1<<endl;
    cout<<"2 is = "<<counter2<<endl;
    cout<<"3 is = "<<counter3<<endl;


    cout<<"10 is = "<<counter10<<endl;

}
