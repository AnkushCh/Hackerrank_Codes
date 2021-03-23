#include <iostream> 
#include <vector> 
#include<algorithm>
#include<cmath>
  
using namespace std; 
  
int main() 
{ 
//     vector<int> g1{4,2,1,5,6,9,7,8,3}; 
  
//     cout << "Output of begin and end: "; 
//     for (auto i = g1.begin(); i != g1.end(); ++i) 
//         cout << *i << " "; 
//         long long int  abc = 322327778234567877;
//         cout << " Number of digit :" << floor(log10(abc))+1 << endl;
//         cout << "gcd :" << __gcd(2,8);
//   reverse(g1.begin(),g1.end());
//   cout <<"Reverse : ";

//   for(int i = 0; i < g1.size(); i++)
//   cout << g1[i] << " ";

// cout << "Sort :";

// sort(g1.begin(),g1.end());
//   for(int i = 0; i < g1.size(); i++)
//   cout << g1[i] << " ";
  
   int a[6] = {0};

//  iota(a,a+6,1);
  
  int x = sizeof(a)/a[0];
  cout << "size of a : " << x;
  for(int i = 0; i < x; i++)
  {
      cout << a[i] << " " << endl;
  }
  
    return 0; 
} 