#include<bits/stdc++.h>
using namespace std;
int n,d;
string ans;
int main(){
      cout<<"How many people will drink tee :"<<endl;
      cin>>n;
      cout<<"If anyone has diabetic?,yes or no."<<endl;
      cin>>ans;
      d = 0;
      if(ans == "yes"){
         cout<<"how many has diabetic :"<<endl;
         cin>>d;
      }
      cout<<"so you need ";
      if(d>=1){
        cout<<1.5*n<<" cup of water, "<<endl;
        cout<<((1.5*n)-d)<<" tee spoon sugar,"<<endl;
        cout<<(1.5*n)<<" tee spoon Cha pata"<<endl;
      }
      else{
        cout<<1.5*n<<" cup of water, "<<endl;
        cout<<(1.5*n)<<" tee spoon sugar,"<<endl;
        cout<<(1.5*n)<<" tee spoon Cha pata"<<endl;
      }
}
