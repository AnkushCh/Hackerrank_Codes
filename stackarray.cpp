#include<iostream>
#include<stack>
using namespace std;
int main()
{
  string str = "{{(([])[])[]]}";
  stack<char>a;
        for(int j = 0; j < str.length();j++)
        {
            if((str[j] == '(') || (str[j] == '{') || (str[j] == '['))
                { 
                    // cout << str[j];
                    a.push(str[j]);
                }
            else if((str[j] == ')') && (a.top() == '('))
                    {
                         a.pop();

                    }
            else if((str[j] == '}') && ('{' == a.top()))
            {
                a.pop();
            }
            else if((str[j] == ']') && ('[' == a.top()))
            a.pop();
        }
        if(a.empty())
        cout << "YES";
        else cout <<"NO";

    return 0;
}