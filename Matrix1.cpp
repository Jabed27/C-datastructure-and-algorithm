#include<bits/stdc++.h>
#define size 3 //size
using namespace std;
int main()
{
    int a[size][size];
    int row,col;
    cout<<"Enter some element dogonto plz...: "<<endl;
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
    for(row = 3;row >=0;row--){
        for(col = 0;col<size;col++){
            cout<<a[row][col];
        }
        cout<<endl;
    }
    }

