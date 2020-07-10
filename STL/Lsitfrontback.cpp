#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main(){

   int ar[5] = {6,9,7,8,10};
   list <int >mylist(ar,ar+5);
    list <int >::iterator it;
   cout<<mylist.front()<<endl;

   mylist.pop_front();
   for(it = mylist.begin();it!=mylist.end();it++){
    cout<<*it<<"\t";
   }
   cout<<"\n";
    mylist.pop_back();
   for(it = mylist.begin();it!=mylist.end();it++){
    cout<<*it<<"\t";
   }
   cout<<"\n";

   mylist.pop_front();
   for(it = mylist.begin();it!=mylist.end();it++){
    cout<<*it<<"\t";
   }
}
