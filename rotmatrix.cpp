#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1,2,3,},
        {4,5,6},
        {7,8,9}
        };
        int temp[3][3];
        for(int i = 0; i < 3; i ++)
        {
            for(int j = 0; j < 3; j++)
            {
                temp[i][j] = arr[i][j]; 
            }
        }
        
    for(int i = 0; i < 3; i ++)
        {
            for(int j = 0; j < 3; j++) 
            {
                arr[j][2-i] = temp[i][j];
            }
        }
    for(int i = 0; i < 3; i ++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    return 0;
}
