#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char* str = "poooop";
    int len = strlen(str) - 1;
    int flag = 0;
    for(int i = 0; i < len/2; i++)
    {
            if(str[i] == str[len-i])
            {
                flag = 0;   
            }
            else flag = 1;
    }
    if(flag == 0)
    {
        cout << "String is palidrome";
    }
    else cout << "not palidrome";
    return 0;
}