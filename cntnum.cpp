#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 124212;
    int cnt = 0;
    int c = log10(n) + 1;
    cout << c << endl;
    while(n > 0)
    {
        n = n / 10;
        cnt++;
    }
    cout << cnt;
    return 0;
}