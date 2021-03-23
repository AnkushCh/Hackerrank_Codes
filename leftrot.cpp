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
        temp = arr[0];
        for(int j = 0; j < n; j++)
        {
        arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
    for(int i = 0; i < n; i++) 
    {
        cout << arr[i]<<" ";
    }

}
