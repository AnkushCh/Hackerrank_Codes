#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<string,string>m;
    string k,v;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> k >> v;
        m[k] = v; 
    }
    for(auto i : m)
    cout << i.first <<" " << i.second << endl;
}