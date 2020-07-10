#include<iostream>
#include<vector>
#include<iterator>

using namespace std;
int main(){

    vector<int>vec(5,0);
    vec.push_back(22);
    for(int i = 0;i<vec.size();i++){

        cout<<vec[i]<<endl;
    }
    vector<int>bav;
    vector<int>::iterator it;

    for(int j =0;j<5;j++){

        bav.push_back(j);

    }
    for(int k = 0; k<bav.size();k++){

        cout<<bav[k]<<"\t";
    }
    cout<<"\n"<<endl;
    it = bav.begin();
    cout<< *it<<endl;


}
