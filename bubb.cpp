#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{4,3,1,4,6,2,8,6,4};
    for(int i = 0; i < v.size()-1; i++)
    {
        for(int j = i+1; j < v.size(); j++)
        {
            if(v[i] > v[j])
            swap(v[i],v[j]);
        }
    }
    for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

    return 0;


}