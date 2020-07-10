#include<iostream>
#include<cstring>
using namespace std;
int main(){
        string str;
        string str1;

        getline(cin,str);//for string input
        cout<<"string is:"<<str<<endl;
        char letter;
        cout<<"enter a letter:"<<endl;
        cin>>letter;
        str.push_back(letter);//character pushing
        cout<<"After pushing character :"<<str<<endl;
        cout<<"After pushing character :"<<str1<<endl;
        cout<<"Enter String : "<<endl;
        cin>>str1;


}
