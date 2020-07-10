#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,input,i,j,k;
    vector<int>vec;
    cin>>n;
    for(int i =0;i<n;i++){
      cin>>input;
      vec.push_back(input);
    }
    cin>>m;
    for(int j =0;j<m;j++){
       cin>>k;
       auto it = lower_bound(vec.begin(),vec.end(),k);

       if(*it == k){
           cout<<"Yes "<<it-vec.begin()+1<<endl;
       }
       else{
           cout<<"No "<<it-vec.begin()+1<<endl;
       }
    }
    return 0;
}

