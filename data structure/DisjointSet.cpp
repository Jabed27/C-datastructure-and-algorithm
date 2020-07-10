#include<bits/stdc++.h>
using namespace std;
int par[100];
int Find(int g){
    if(par[g]==g){
        return g;
    }
    else{
        par[g]=Find(par[g]);
        return par[g];
    }
}
void Union(int a,int b){
      int u = Find(a);
      int v = Find(b);
      if(u==v){
        cout<<"They are already friends!"<<endl;
      }
      else{
        par[v]=u;
      }
}
int main(){
    int n,a,b;
    cout<<"Enter the no of relationship you want"<<endl;
    cin>>n;
    cout<<"Enter the relationship of two nodes"<<endl;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        Union(a,b);
    }

}
