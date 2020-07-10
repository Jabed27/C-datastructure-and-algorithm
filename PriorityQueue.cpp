#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int main(){
        priority_queue<int>q;
        q.push(400*-1);
        q.push(299*-1);
        q.push(10*-1);
        q.push(1*-1);
        while(!q.empty()){
            cout<<q.top()*(-1)<<endl;
            q.pop();

        }
}
