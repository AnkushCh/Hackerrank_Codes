#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    for(int i = 0; i < 5; i++)
    {
        s.push(i);
    }
    for(int i = 0; i < 5; i++)
    {
        cout << s.top()<<endl;
        s.pop();
    }
    cout <<"Size "<< s.size();
return 0;
}