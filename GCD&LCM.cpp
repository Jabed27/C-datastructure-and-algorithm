#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,num1,num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    n1 = num1;
    n2 = num2;
    int temp;
    while(n2!=0)
    {
        temp = n1%n2;
        n1 = n2;
        n2 = temp;
    }
    int GCD = n1;
    cout<<"GCD is : "<<GCD<<endl;
    int LCM = (num1*num2)/GCD;
    cout<<"LCM is: "<<LCM<<endl;

}
