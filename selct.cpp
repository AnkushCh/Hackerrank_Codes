#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{4,1,3,8,7,2};

    for(int i = 0; i < v.size(); i++)
    {
        int min = i;
        for(int j = i+1; j < v.size(); j++)
        {
            if(v[min] > v[j])
            {
                min = j;
            }
        }
        swap(v[min],v[i]);
    }
    for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    return 0;
}