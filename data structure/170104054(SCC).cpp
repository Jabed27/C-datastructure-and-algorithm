#include<bits/stdc++.h>
using namespace std;

int color[1000];
int color1[1000];
vector<int>adj[1000];
vector<int>v2[1000];
vector<int>deadlock_component[1000];
stack<int>q;
vector<int>component[15];
 int n,m;
void printAdjacency(vector <int>adj[])
{
    for(int i=1;i<=n;i++)
    {
        int Size=adj[i].size();
        cout<<i<<"-->";
        for(int j=0;j<Size;j++)
        {
            cout<<adj[i][j]<<",";
        }
        cout<<endl;
    }
}
void DFS(vector <int>v1[],int source){
     int a;
     color[source] = 1;

     for(int i =0;i<v1[source].size();i++){
        a = v1[source].at(i);
        if(color[a]==0){
            DFS(v1,a);
        }
     }

     q.push(source);
}

void DFS1(vector<int>v2[],int source,int mark){

     component[mark].push_back(source);//132      4      5 7 6

     color1[source] = 1;// 1 2
      for(int i =0;i<v2[source].size();i++){
         int a = v2[source][i];// 2
         if(color1[a]==0){
            DFS1(v2,a,mark);
        }
     }
}
void recovery(vector <int>adj[],vector<int>deadlocks_component[],int deadlocksize){
      int j=0;
    for(int i=1;i<=deadlocksize;i++)
    {
             int p1=deadlocks_component[i][j];
             int r1=deadlocks_component[i][j+1];

             auto it=find(adj[r1].begin(),adj[r1].end(),p1);
             adj[r1].erase(it);
    }
    printAdjacency(adj);
}
int main()
{

    cout<<"enter edge and vertex"<<endl;
    cin>>n>>m;
     int u,ver;
    for(int i =0;i<m;i++){
        cin>>u>>ver;
        adj[u].push_back(ver);
        v2[ver].push_back(u); //tanspose hobe
    }
    printAdjacency(adj);
    //printAdjacency(v2);
     for (int i=1;i<=n;i++)
        {
            if(color[i]==0)
                DFS(adj,i);
        }


        int mark = 0;
        while(!q.empty()){
            int u = q.top();//1 2
            q.pop();
             if(color1[u]==0){
                    mark = mark+1; //1 2
                    DFS1(v2,u,mark);
             }

        }

       // cout<<"Number of Components: "<<mark<<endl;
       int deadlock=0;
        for(int i=1;i<=mark;i++)
            {
                int Size=component[i].size();
                if(Size>3){
                    deadlock++;
                    for(int j=0;j<Size;j++)
                  {
                     cout<<component[i][j]<<" ";
                     deadlock_component[deadlock].push_back(component[i][j]);
                  }
                  cout<<"deadlock found:"<<deadlock;
                }
                cout<<endl;
            }
             recovery(adj,deadlock_component,deadlock);
}
