#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
string s = "This is a string";
// cout << "Enter your name:";
// getline(cin,s);
// s.push_back('c');
// s.append(" choudhary");
cout << s << endl;
cout << s.capacity() << endl;
s.resize(s.length() - 3);
cout << s.capacity()<<endl;
cout << s<<endl;
s.shrink_to_fit();
cout << s.capacity()<<endl;
cout << s<<endl;
return 0;
}