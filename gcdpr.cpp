#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else{
        gcd(b,a%b);
    }
}
int main()
{
    cout << gcd(4,8);
    string s = "1231";
    int n = stoi(s);
    cout << n;
  }
