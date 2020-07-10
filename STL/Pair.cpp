#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){

     pair<string,int >p("Jabed",54);
     cout<<p.first<<" "<<p.second<<endl;

     p = make_pair("Hassan",75);

     cout<<p.first<<" "<<p.second<<endl;


}
