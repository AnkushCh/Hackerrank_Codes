#include<iostream>
using namespace std;
#define watch(x) cout << (#x) << " is " << x <<endl
int main()
{  
    int a[6] = {0};
  
//    int x = sizeof(a)/a[0];
//   cout << " hello";
//   cout << "size of a : " << x;

  for(int i = 0; i < 6; i++)
  {
      cout << a[i] << " " << endl;
  }
  int x = 43434;
  watch(x);
    return 0; 
} 