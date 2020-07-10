#include<bits/stdc++.h>
using namespace std;
int color[1000];
int color1[1000];
stack<int>q;
vector <int>adj[1000];
vector<int>v2[1000];
vector<int>component[1000];
void DFS(vector<int>v[],int source){
       int a;
       color[source]=1;
       for(int i=0;i<v[source].size();i++){
         int u = v[source].at(i);
         if(color[u]==0){
            DFS(adj,u);
         }
       }
       q.push(source);

}
void DFS1(vector<int>v[],int source,int mark){
    int a ;
     color1[source]=1;
    component[mark].push_back(source);
    for(int i =0;i<v[source].size();i++){
       int u = v[source].at(i);
         if(color1[u]==0){
            DFS1(v2,u,mark);
         }
    }

}
int main(){
   int n,m;
   int g[5];
   cin>>n>>m;
  for(int i =0;i<3;i++){
     cin>>g[i];
   }
   //cin>>g;

   for(int i =0;i<m;i++){
    int u,ver;
    cin>>u>>ver;
    adj[u].push_back(ver);
    v2[ver].push_back(u);
   }
   for(int i =0;i<n;i++){
        if(color[i]==0){
             DFS(adj,i);
        }

   }
   int mark = 0;
   while(!q.empty()){
        int u = q.top();
        q.pop();

        if(color1[u]==0){
            mark = mark+1;
            DFS1(v2,u,mark);
        }
   }
   for(int k=0;k<3;k++){
     for(int i =0;i<mark;i++){
    for(int j =0;j<component[i].size();j++){
            //int a =component[i][j];
            if(component[i][j] == g[k]){
                cout<<" component "<<i<<endl;
            }
        //cout<<component[i][j]<<" ";
    }
    cout<<endl;
   }
   }



}
