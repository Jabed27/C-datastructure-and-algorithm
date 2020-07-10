#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
      list <int > mylist;
      list<int>::iterator it;
      mylist.push_back(45);
          mylist.push_back(35);
              mylist.push_back(75);
                  mylist.push_back(55);
      it = find( mylist.begin(),mylist.end(),55);
      mylist.erase(it);
      for(it = mylist.begin();it!=mylist.end();it++){
                     cout<<*it<<"\t";

      }


}
