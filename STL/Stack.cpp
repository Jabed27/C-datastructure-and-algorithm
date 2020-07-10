#include<iostream>
#include<stack>
using namespace std;
int main(){

     stack<string>s;
     s.push("Jabed");
     s.push("Karim");                ///FIFO
     s.push("Kaka");
      cout<< s.top()<<endl;

      cout<<"------ "<<endl;
        while(!s.empty()){
        string x;
        x = s.top();
        cout<<x<<endl;
        s.pop();
        }


}
