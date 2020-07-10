#include<iostream>
#include<set>
#include<vector>
#include<iterator>
using namespace std;
int main(){
          set<string>s;
          set<string>::iterator it;
          s.insert("Jabed");
          s.insert("Mashfi");
          s.insert("Kaka");
          s.insert("Sifat");
          for(it = s.begin();it!=s.end();it++){
            cout<<*it<<" \n";

          }
          cout<<endl;
          pair< set<string>::iterator,bool>p;
        p = s.insert("Jabed");
        if(p.second == false){
            cout<<"Can't be inserted"<<endl;
        }
        else{
            cout<<"can be inserted"<<endl;
        }


}
