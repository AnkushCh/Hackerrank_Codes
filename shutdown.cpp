#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    string st1 = "gfg";
    string st2 = "ggf";
    int count1[256] = {0};
    int count2[256];
  
    for(int i = 0; i < st1.length();i++)
    {
        count1[st1[i]]++;

    }
    for(int i = 0; i < st1.length();i++)
    {
        cout << count1[i] << " ";
        
    }

    return 0;
}