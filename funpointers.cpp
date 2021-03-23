#include<iostream>
#include<cstring>
using namespace std;

typedef void (*funptr)(int,int);
void add(int a,int b)
{
    cout <<"a + b = " << a + b;
}
void sub(int a,int b)
{
    cout <<" a - b = " << a - b;
}

int main()
{
    funptr ptr;
    ptr = &add;
    ptr(1,5);
    ptr = &sub;
    ptr (5,2);
}