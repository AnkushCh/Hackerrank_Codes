#include <bits/stdc++.h>

using namespace std;

#define fr(i,n) for(int i = 0; i < n; i++)
#define l long 
#define pb push_back
// typedef vector<int> v;

int main()
{
    l n;
    vector<int> v;
    cin >> n;
    fr(i,n)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    
    reverse(v.begin(),v.end());

    fr(i,n)
    {
        cout << v[i] << " ";
    }
    return 0;
}