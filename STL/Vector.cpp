#include<iostream>//cout r cin (input and output)
#include<stdio.h>// input and output for c
#include<vector>
using namespace std;

int main(){

    vector<int>v;
    int n;

    /*v.push_back(4);
    printf("%d",v[0]);       manual push, print
    printf("hello world ");*/


    for(int i=0;i<5;i++){
       v.push_back(i);
    }

    for(int j=0;j<5;j++){
        printf("%d\n",v[j]);
    }
}
