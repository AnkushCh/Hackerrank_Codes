#include <iostream>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;

#define int long long
#define pb push_back

#define all(con) con.begin(), con.end()
#define fi first
#define se second
#define sz(x) (int)x.size()
typedef long double ld;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define rp(i, n) for (int i = 0; i < n; i++)
#define fr(i, n) for (int i = 1; i <= n; i++)
#define ff(i, a, b) for (int i = a; i <= b; i++)


// int rev(int num)
// {
//     int revnum = 0;
//     while(num > 0)
//     {
//         revnum = revnum*10 + num % 10;
//         num /= 10;
//     }
//     return revnum;
// }
signed main()
{
    int x,indx = 1;
    map<int,int>m;
    rp(i,5)
    {
        cin >> x;
        m[x] = indx++;

    }
    for(auto i = m.begin(); i != m.end();i++)
    {
        cout <<"Key : "<< i -> first << " Value : " << i -> second <<endl; 
    }
    return 0;
}