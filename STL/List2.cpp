#include<iostream>
#include<iterator>
#include<list>
#include<algorithm>
using namespace std;
int main(){
        int ar[5] = {3,5,8,9,1};
       list <int>mylist(ar,ar+5);

       list<int>::iterator it;

       for(it = mylist.begin();it!=mylist.end();it++){

            cout<<*it<<"\t";
       }
       cout<<"\n";
       it = mylist.begin();
       cout<<*it<<endl;
       it++;
     mylist.insert(it,9);
        for(it = mylist.begin();it!=mylist.end();it++){

            cout<<*it<<"\t";
       }
 cout<<"\n";
      it =  find( mylist.begin(),mylist.end(),1);
       mylist.insert(it,8);
        for(it = mylist.begin();it!=mylist.end();it++){

            cout<<*it<<"\t";
       }
}
