#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i + 1);
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << "\n";

    int last = v[4];
    int n = 4;
    for (int i = 0; i < 5; i++)
    {
        v[n - i] = v[n - 1 - i ];
    }
    v[0] = last;

    // unique(v.begin(),v.end());
    // //    v.erase(unique(v.begin(),v.end()),v.end());
    //    cout<<endl;
   for(int i = 0; i < 5; i++)
   {
       cout << v[i] <<" ";
   }
    return 0;
}