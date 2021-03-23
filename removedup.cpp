#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,2,3,3,4};
    int i = 0;
    for(int j = 1; j < 6; j++)
    {
        if(arr[j] != arr[i]){
            arr[++i] = arr[j];
        }
    }
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}