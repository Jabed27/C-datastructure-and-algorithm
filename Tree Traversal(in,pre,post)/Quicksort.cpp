#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int num[100];

void QUICKSORT(int f , int l)
{
    int i , j;
    if(f < l)
    {
        i = f+1;
        while (num[i] < num[f])
        {
            i++;
        }
        j = l;
        while(num[j] > num[f])
        {
            j--;
        }
        while(i < j)
        {
            swap(num[i] , num[j]);
            while (num[i] < num[f])
            {
                i++;
            }
            j = l;
            while(num[j] > num[f])
            {
                j--;
            }
        }
        swap(num[j] , num[f]);
        QUICKSORT(f , j-1);
        QUICKSORT(j+1 , l);
    }
}
int main()
{
    int list[] = {7,3,18,12,2,40,4};
 size_t size = sizeof(list)/sizeof(list[0]);
 quickSort(list, 0, size - 1);
 return 0;

}
