#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

struct s
{
    string s;
    double cgpa;
};
s A[100];
int Partition(int l,int h)
{
    s pivot = A[h];

    int i = l-1;
    int j = h;

    while(true)
    {
        while(A[++i].cgpa>pivot.cgpa)
        {

        }

        while(A[--j].cgpa<pivot.cgpa && j>0)
        {

        }

        if(i>=j)
            break;
        else
            swap(A[i],A[j]);
    }

    swap(A[i],A[h]);

    return i;
}
void quickSort(int l, int h)
{
    if(l<h)
    {
        int p = Partition(l,h);

        quickSort(l,p-1);
        quickSort(p+1,h);
    }
}
int main(){

    int n;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        string s;
        double cg;

        cin >> s >> cg;

        A[i].s = s;
        A[i].cgpa = cg;
    }

    quickSort(0,n-1);

    cout << "Output : " << endl;

    for(int i =0; i<n; i++)
    {
        cout << A[i].s << " " << A[i].cgpa << endl;
    }

    return 0;
}
