#include <iostream>
#include <deque>
using namespace std;
deque<int> mydeque;
void printKMax(deque <int> g,int n){
	//Write your code here.
    for(int i =0;i<n-1;i++){
        if(g.at(i)>g.at(i+1)){
             cout<<g.at(i)<<" ";
        }else{
            cout<<g.at(i+1)<<" ";
        }
    }
    cout<<endl;


}

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int input;
    	for(i=0;i<n;i++)
      		cin >> input;
              mydeque.push_back(input);
    	printKMax(mydeque,n);
    	t--;
  	}
  	return 0;
}

