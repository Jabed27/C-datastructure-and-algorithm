#include<cstring>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i1,i2,res1;
    double d1,d2,res2;
    string s1,s2,res3;
    cout<<"Enter Tow integer"<<endl;
    cin>>i1>>i2;
    cout<<"Enter Tow string"<<endl;
    cin>>s1>>s2;
    cout<<"Enter Tow double"<<endl;
    cin>>d1>>d2;
    cout<<"Results of the integer are"<<endl;
    res1 = i1+i2;
    cout<<res1<<endl;
    cout<<"Results of the strings are"<<endl;
    res3 = s1+s2;
    cout<<res3<<endl;
    cout<<"Results of the double are"<<endl;
    res2 = d1+d2;
    cout<<res2<<endl;
}
