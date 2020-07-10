#include<iostream>
#include<vector>
#include<utility>
#include<iterator>
using namespace std;
int main(){
       vector <pair<string,int> >v;
       vector <pair<string,int> >::iterator it;
       v.push_back(make_pair("Jabed",54));
       v.push_back(make_pair("Gias",62));
       v.push_back(make_pair("Rina",71));
       v.push_back(make_pair("Lubna",87));
       for(it = v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<" "<<endl;
       }
}
