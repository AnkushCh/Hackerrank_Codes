#include<iostream>
#include<cstring>
using namespace std;

class animals
{
    char *name;
    int len;
    public:
    void naming(void);
    void printName();
};
void animals:: naming()
{
     char *s;
     s = new char[20];
     cout << "Enter the name of animal: ";
     cin >> s;
     len = strlen(s);
     name = new char[len + 1];
     strcpy(name,s);
}
void animals:: printName()
{
    cout << "Name : " << name<<endl;
}

int main()
{
    animals *a[3];
    for(int i = 0; i < 3; i++)
    {
        a[i] = new animals;
        a[i]->naming();
    }
    for(int i = 0; i < 3; i++)
    {
        a[i]->printName();
    }

    return 0;

}   