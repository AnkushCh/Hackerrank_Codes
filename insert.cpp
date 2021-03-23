#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int bin[32];
    int num = 74434;
    int i = 0;
    while(num > 0)
    {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }
    for(int j = i-1; j >=0; j--)
    cout << bin[j] <<" ";
    return 0;
}