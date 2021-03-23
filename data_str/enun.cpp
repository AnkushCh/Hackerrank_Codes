#include<iostream>
using namespace std;
int main()
{
    enum gen{
        male,female
    };
    gen g = male;
    switch (g)
    {
    case male:
        cout<< "Male";
        break;
    case female:
        cout << "Female";
        break;
    default:
        cout<<"Should be male or female";
    }
    return 0;
}