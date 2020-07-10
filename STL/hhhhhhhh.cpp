#include<bits/stdc++.h>

using namespace std;

int a[100];
int n;

int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return 2*i+1;
}

void maxhepify(int hsize,int i)
{
    int largest,l,r;
    l=left(i);
    r=right(i);
    largest=i;
    if(l<=hsize&&a[l]>a[i])
    {
        largest=l;
    }

    if(r<=hsize&&a[r]>a[i])
    {
        largest=r;
    }

    if(largest!=i)
    {
        swap(a[i],a[largest]);
        maxhepify(hsize,largest);
    }
}
void buildmaxheap(int hsize)
{

    for (int i=floor(hsize/2);i>0;i--)
    {
        maxhepify(hsize,i);
    }
}

int heapsort(int hsize)
{
    buildmaxheap(hsize);
    for(int i=hsize;i>=2;i--)
    {
        swap(a[1],a[i]);
        hsize=hsize-1;

        maxhepify(hsize,1);

    }
}
int main()
{


    cout<<"enter total number of data to sort = ";
    cin>>n;

    cout<<"enter elements=";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    heapsort(n);
    cout<<"---------------sorted-------------------"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<" "<<a[i]<<" ";
    }
    return 0;
}
