#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ankush choudhary";
    unordered_map<char,int>u;
    map<char,int>m;

    for(auto i : s)u[i]++;
    for(auto i : s)m[i]++;

    for(auto i : u) cout << i.first << " " << i.second << "\n";
    cout << NULL
    return 0;
}