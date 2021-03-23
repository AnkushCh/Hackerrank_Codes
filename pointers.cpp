#include<iostream>
using namespace std;
int main()
{
    int *ptr,**ptr2,a = 4;
    ptr = &a;
    cout <<"Address of a is "<<ptr <<endl;
    cout <<"Value of a is "<< *ptr<<endl;
    ptr ++;
    cout <<"Address of a after incrementation "<<ptr <<endl;
    cout << *ptr<<endl;
    ptr2 = & ptr;
    cout <<"Address of ptr2 is "<<ptr2<<endl;
    cout << *ptr2<<endl;
    cout <<"Value of ptr2 is "<< **ptr2<<endl;
    ptr2++;
    cout <<"Address of ptr after incrementation "<<ptr2 <<endl;
    cout << *ptr2 <<endl;
    cout << **ptr2 <<endl;

    int *x, y = 35;
    x = &y;
    cout << x <<endl;
    cout << *x/5;

    return 0;
}
