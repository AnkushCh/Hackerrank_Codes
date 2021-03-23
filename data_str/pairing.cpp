#include<iostream>
using namespace std;
void pairing(int n)
{
    int i = 0;
    while(i < n)
    {
        int j = 0;
        while(j < n)
        {
            cout << i <<" "<< j <<endl;
            j = j+1;
        }
        i++;
    }
}
int main()
{
    pairing(10);
    return 0;
}