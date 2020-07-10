#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int myfunc(int a,int b){
       return (a>b);
}
int main(){
            vector <int >vec;
            vector <int >::iterator it;
            vec.push_back(30);
            vec.push_back(78);
            vec.push_back(-9);
            vec.push_back(65);

            sort(vec.begin(),vec.end());///     assending

            for(int i = 0;i<4;i++){
                cout<<vec[i]<<"\t";
            }
            cout<<"\n";
            sort(vec.begin(),vec.end(),myfunc);            ///desending
             for(it = vec.begin();it!= vec.end();it++){
                cout<<*it<<"\t";

            }
            cout<<"\n";
            sort(vec.begin(),vec.begin()+3);
    for(it = vec.begin();it!= vec.end();it++){
                cout<<*it<<"\t";

            }
 }
