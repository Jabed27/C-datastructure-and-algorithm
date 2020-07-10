#include <iostream>
#include <vector>
#include<stdio.h>

using namespace std;

int main()
{
	vector<int> g1;
     int n;
    cin>>n;
    for(int i = 0;i<n;i++){
       int input;
      cin>>input;
      g1.push_back(input);
    }
  int odd = 0;
  int even = 0;
  while(!g1.empty()){
       int d;
      d = g1.back();
    if(d%2==0){
      even = even+d;
    }else{
      odd = odd+d;
    }
    g1.pop_back();
  }
  if(odd>even){
   printf("yes");
  }
  else{
    printf("no");
  }

	return 0;
}
