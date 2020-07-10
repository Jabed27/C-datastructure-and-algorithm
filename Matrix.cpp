#include<bits/stdc++.h>
#define size 3 //size
int main()
{
    int a[size][size];
    int row,col;
   printf("enter some element:");
    for(row = 0;row<size;row++){
        for(col = 0;col<size;col++){
            cin>>a[row][col];
        }
    }
        cout<<"the Matrix should be look like before inversing:"<<endl;
    for(row = 0;row<size;row++){
        for(col = 0;col<size;col++){
           cout<<a[row][col];
        }
        cout<<endl;
    }
    cout <<"now digonto wants the matrix should be look like: "<<endl;
    for(row = size;row>0;row--;){
        for(col = 0;col<size;col++){
            cout<<a[row][col];
        }
        cout<<endl;
    }
    }
