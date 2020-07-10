#include<bits/stdc++.h>
using namespace std;
int n,m,u,total_wt=0,density=0,cc;
double value = 0.0,prof,wt;
vector<pair<int,pair<int,int>>>v;
void knapsack(){
     sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
     for(int i =0;i<n;i++){

        if((v[i].second.second)+total_wt<=m){
            total_wt = (v[i].second.second)+total_wt;
            density +=  v[i].second.first;


        }else{
           cc = m - total_wt;
           density = density+(cc/(v[i].second.second));
           break;
        }
     }
     cout<<"Total profit "<<density<<endl;

}
int main(){
   cout<<"enter the item number: "<<endl;
   cin>>n;
   cout<<"what will be the capacity? "<<endl;
   cin>>m;
   for(int i =0;i<n;i++){
    cin>>prof>>wt;
    value = (prof/wt);
    v.push_back(make_pair(value,make_pair(prof,wt)));

   }
   knapsack();
}
