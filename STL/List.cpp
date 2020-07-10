#include<list>
#include<iostream>
#include<iterator>
using namespace std;
int main(){
     list <float>mylist;
     list <float>::iterator it;
     mylist.push_back(45);
     mylist.push_back(78);
     mylist.push_back(71);
     mylist.push_front(4);

     for(it = mylist.begin();it!=mylist.end();it++){

        cout<<*it<<"\t";
     }
     cout<<"\n";
     mylist.reverse();
      for(it = mylist.begin();it!=mylist.end();it++){

        cout<<*it<<"\t";
     }
      cout<<"\n";
     mylist.clear();
     cout<< mylist.size()<<endl;
}
