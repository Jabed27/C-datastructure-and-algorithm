#include<iostream>
#include<stdio.h>
#include<vector>
#include<iterator>
using namespace std;
double odd,even;
int main(){

       vector <int>vec;
       vector <int>::iterator id;
       for(int i = 0;i<5;i++){
             int input;
             cin>>input;
             vec.push_back(input);

       }
        double sumodd = 0;
        double sumeven= 0;
       for(int i = 0;i<vec.size();i++){

           if(vec[i]%2==0){
              sumodd = sumodd+1;
           }
           else{
            sumeven = sumeven+1;
           }
       }
        cout<<"odds are"<<sumodd<<endl;
        cout<<"evens are"<<sumeven<<endl;
}

