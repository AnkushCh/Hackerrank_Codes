#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int part(int arr[], int low,int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++)
    {
        if(pivot >= arr[j])
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}
void quicksort(int arr[],int low, int high)
{
    if(high > low)
    {
        int pi = part(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main()
{
    // quick sort
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n;
    quicksort(arr,0,n-1);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }   
    return 0;

}