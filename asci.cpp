#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5,6,7,8,9};
    //sort(v.begin(),v.end());
    // int f = 0;
    // for(int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // int l = v.size() - 1;
    // int mid = (f+l)/2;
    //  int x = 12;
    // if(binary_search(v.begin(),v.end(),x))
    // {
    //     cout << x << " present"<< endl;
    // }
    // else{
    //     cout << x << " not present";
    // }
    auto upr = upper_bound(v.begin(),v.end(),7);
    auto lw = lower_bound(v.begin(),v.end(),7);
     cout << "Upper bound: " << *upr << endl;
    cout << "lower bound: " << *lw  << endl;

    cout << "Upper bound: " << upr - v.begin() << endl;
    cout << "lower bound: " << lw - v.begin() << endl;
    // cout << endl;
    // while(f <= l && v[mid] != x)
    // {
    //     mid = (f+l)/2;

    //     if(v[mid] == x)
    //     {
    //         cout << x << " present at " << mid;
    //         break;
    //     }
    //     else if(v[mid] < x)
    //     {
    //         f = mid+1;
    //     }
    //     else{l = mid-1;}
    //     if(f == l && v[mid] != x)
    //     {
    //         cout << x << " not present ";
    //         break;
    //     }
    // }
}