#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for(int i = 0; i < k; i++)
    {
        temp = arr[n-1];
        for(int j = n-1; j >= 0; j--)
        {
        arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    for(int i = 0; i < n; i++) 
    {
        cout << arr[i]<<" ";
    }  
}
