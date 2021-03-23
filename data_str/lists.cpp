#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>g1;
    for(int i = 0; i < 10; i++)
    {
        g1.push_back(i);
        g1.push_front(i+1);
    } 
    for(auto i:g1)
    {
        cout << i <<" ";
    }
}