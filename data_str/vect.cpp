#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5};
    cout<<v.at(0)<<endl;
    v.push_back(3);
    cout << v.at(v.size()-1)<<endl;
    auto itr = v.begin();
    v.insert(itr,0);
    cout << v.at(0)<<endl;
    for(auto i:v)
    {
        cout << v[i]<<" ";
    }
    cout <<endl;
    itr = find(v.begin(),v.end(),4);
    if(itr != v.end())
    {
        cout << "Element present";
    }
    else{cout << "Elemennt not present";}
    return 0;
}