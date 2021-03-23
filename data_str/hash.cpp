#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int>v1  = {5,-4,-7,6,8,3,-2};
    sort(v1.begin(),v1.end(), greater<int>());
    for(auto i : v1)
    cout << i << " ";
    return 0;
}