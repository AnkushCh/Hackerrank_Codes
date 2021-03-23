#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
    int n1 = m -l;
    int n2 = r-m;
    int L[n1];
    int R[n2];
    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[l+i];
    }
    for(int i = 0; i < n2; i++)
    {
        R[i] = arr[m + i];
    }
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l < r)
    {
        int m = (l + r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main()
{
int arr[] = {8,0,5,3,4,2,5,0,1,1};
int l = 0; 
int r = sizeof(arr)/sizeof(arr[0]) - 1;
mergesort(arr,l,r);
for(int i = 0; i < 10; i++)
{
    cout << arr[i] << " ";
} 
return 0;   
}