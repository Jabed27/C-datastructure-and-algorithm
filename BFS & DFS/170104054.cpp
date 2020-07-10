#include<bits/stdc++.h>
using namespace std;
int color[1000];
vector<int>v[1000];
stack<int>q;
void DFS(int source){
     int a;
     color[source] = 1;

     for(int i =0;i<v[source].size();i++){
        a = v[source].at(i);
        if(color[a]==0){
            DFS(a);
        }
     }

     q.push(source);
}
int main()
{
    int n,m;
    cin>>n>>m;
     int u,ver;
    for(int i =0;i<m;i++){

        cin>>u>>ver;
        v[u].push_back(ver);
      // v[ver].push_back(u);
    }


     cout<<endl;
     cout<<"DFS"<<endl;

      for (int i=1;i<=n;i++)
        {
            if(color[i]==0)
                DFS(i);
        }



     while(!q.empty()){
        int u = q.top();

        cout<<u<<endl;
         q.pop();


    }

}
