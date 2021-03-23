#include<iostream>
using namespace std;

class Pet{
public:
    string n;
    Pet(string name)
    {
        n = name;
    }
    void printname()
    {
        cout << n;
    }
};

int main(){
    Pet p = Pet("Doggo");
    p.printname();
    return 0;
}