#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{53,5,45,2,63,7,3,6,5,2,45,2,5,32,3,23,54,65,4,7,484,54,32,56,76,54,67,6,543,45,7,654,3456,765};
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }
    int x;
    cin >> x;
    int mid,f = 0,b = v.size()-1;
    mid = (f+b)/2;

    while(x != v[mid] && f < b)
    {
        if(x == v[mid])
        {
            cout << x << " Found at " << mid << "position"<<endl;
            break;
        }
        else
        {
        if(x < v[mid])
        {
            b = mid-1;
        }
        else
        {
            f = mid + 1;
        }
        }
        mid = (f + b)/2;
    }
    return 0;
}