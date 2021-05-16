#include<bits/stdc++.h>
using namespace std;

#define f(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) 
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(x) (x).begin(), (x).end()  Eg: find(all(c),42)
#define rall(x) (x).rbegin, (x).rend()
#define present(c,x) ((c).find(x) != (c).end()) //O(N)
#define cpresent(c,x) (find(all(c),x) != (c).end()) // O(logn)
#define sz(a) int((a).size())


#define pb push_back
#define fi first
#define se second
#define S size()
#define E end()
#define B begin()
#define L length()
#define endl "\n"
#define gcd __gcd
#define search binary_search
#define mod1 1000000007
#define mod2 998244353
#define INF LLONG_MAX
#define PI 3.1415926535897932384
#define deci(n) fixed << setprecision(n)

typedef long long ll;
typedef double ld;
typedef unsigned long long int ull;
typedef long double ldb;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<vll> vvll;

typedef pair<ll, ll> pll;
typedef pair<int, int> pii;



ll arraySum(ll a[], ll n)
{
    int initial_sum = 0;
    return accumulate(a, a + n, initial_sum);
}
/////////////////////////////////
bool isprime(ll n)
{
    ll flagi = 1;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flagi = 0;
            break;
        }
    }
    if (n <= 1)
    {
        flagi = 0;
    }
    else if (n == 2)
    {
        flagi = 1;
    }
 
    if (flagi == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string decimaltobinary(ll A)
{
    string ans;
    ll i, rem;
    if (A == 0)
    {
        return "0";
    }
 
    while (A > 0)
    {
        rem = A % 2;
 
        ans.push_back(char('0' + rem));
 
        A = A / 2;
    }
 
    reverse(ans.begin(), ans.end());
    return ans;
}
bool sortbysec(const pair<ll, ll> &a,
               const pair<ll, ll> &b)
{
    return (a.second > b.second);
}
///////////////////////////////////////////
vector<ll> res;
void factorize(ll n)
{
    for (ll i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1)
    {
        res.push_back(n);
    }
}

/////////////////////////////////

vector<ll> divs;
void divisor(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            divs.pb(i);
            if (n / i != i)
            {
                divs.pb(n / i);
            }
        }
    }
    divs.pb(1);
    if (n != 1)
    {
        divs.pb(n);
    }
    sort(divs.B, divs.E);
    
}

int main()
{
    int a = 7/2;
    divisor(100000);
    int x = divs.size();
    f(i,x) {cout << divs[i] <<" ";}
    return 0;
}


