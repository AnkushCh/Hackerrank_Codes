#include<iostream>
using namespace std;


class testclass1;
class testclass
{
private:
    int hrs;
    int mins;
public:
    void fun(int x,int y);
    void print()
    {
        cout << "value of hrs is :" << hrs <<" value of min is : " << mins << endl;
    }
    void sum(testclass,testclass);
    friend void swap(testclass&,testclass1&);
};
void testclass::fun(int x,int y)
{
    hrs = x;
    mins = y;
}
void testclass::sum(testclass t1,testclass t2)
{
    mins = t1.mins + t2.mins;
    hrs = mins / 60;
    mins = mins % 60;
    hrs = hrs + t1.hrs + t2.hrs; 

}
class testclass1{
    int x;
    int y;
    public:
    void setvalue()
    {
        x = 24;
    }
    void shw()
    {
        cout << "value of x is :" <<x<<endl;
    }
    friend void swap(testclass&,testclass1&);
};
void swap(testclass& a,testclass1& b)
{
    int temp = a.hrs;
    a.hrs = b.x;
    b.x = temp;

}
int main()
{
    testclass t1;
    testclass1 t2;
    t1.fun(1,2);
    t2.setvalue();
    t1.print();
    t2.shw();
    swap(t1,t2);
    t1.print();
    t2.shw();

}
   