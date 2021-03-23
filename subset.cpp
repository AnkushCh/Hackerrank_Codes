#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m1;
    for(int i = 0; i < 5; i++)
    {
        m1[i] = i+10;
    }
    for(auto i : m1)
    {
        cout << i.first<<" " << i.second<<endl;
    }
    cout << m1.at(4);
}














