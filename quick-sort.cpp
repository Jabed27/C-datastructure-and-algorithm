#include <bits/stdc++.h>

using namespace std;

vector <int> v;

int Partition (int lo,int hi)
{
    int pivot,i,j,temp;

    pivot = v[(hi)];

    i = lo-1;
    j = hi;

    while (1) {

        while (v[++i] < pivot) {}

        while(j>0 && v[--j]>pivot){}

        if (i>=j)
            break;

        else {
            swap(v[i],v[j]);
        }

    }

    swap(v[hi],v[i]);

    return i;
}



void quickSort (int lo,int hi)
{
    int p;

    if (lo<hi) {
        p = Partition(lo,hi);
        quickSort (lo,p-1);
        quickSort (p+1,hi);
    }

}

int main ()
{
    int i;

    v.push_back(3);     v.push_back(13);     v.push_back(31);
    v.push_back(7);     v.push_back(73);     v.push_back(4);
    v.push_back(52);    v.push_back(45);     v.push_back(8);

    for (i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }

    printf("\n");


    //sorting
    quickSort (0,v.size()-1);


    for (i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
   // puts("");

    return 0;
}
