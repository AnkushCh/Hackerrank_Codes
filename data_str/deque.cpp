#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    for(int i = 0; i < 10; i++)
    {
        dq.push_back(i);
    }
    for(int i:dq)
    {
        cout << i <<" ";
    }
    
    return 0;
}