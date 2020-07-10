
//#include<stdlib.h>
#include<bits/stdc++.h>
 using namespace std;

 int main(){
     int z = 0;
            int n;
            cout<<"Enter number to be sorted"<<endl;
            cin >> n;
         int x[n];
         cout<<"Give some unsorted number"<<endl;
         for(int i = 1;i<=n;i++){

            cin >> x[i];
         }
         int k = n;
         while(k!=0){
            int t = 0;

            for(int j = 1;j<=k-1;j++){
                if(x[j]>x[j+1]){
                    swap(x[j],x[j+1]);
                    t = j;
                    z++;

                }

            }
            k = t;

         }
         int y = z*3;

for(int k = 1;k<=n;k++){

    cout<<x[k]<<endl;
}
cout<<"Number of comparison"<<" "<<z<<endl;
cout<<"Number of movement"<<" "<<y<<endl;

 }
