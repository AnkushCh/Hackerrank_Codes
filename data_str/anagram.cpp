#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "string";
    string s2 = "storm";
    // sort(s1.begin(),s1.end());
    // cout << s2.compare(s1);
    int cnt = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1.find(s2[i]) != string::npos)
        cnt++;
    }
    cout << cnt;
    // int n = 5;
    // int res;
    // for(int i = 1; i <= 5; i++)
    // {
    //     res = (res*i) % 2;
    // }
    // cout << res;
    return 0;
}