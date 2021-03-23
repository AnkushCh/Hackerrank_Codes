#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int x;
    for(int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;


    for(int i = 1; i < v.size(); i++)
    {
        int j = i - 1;
        int key = v[i];
        while(j >= 0 && v[j] > key)
        {
            v[j+1] = v[j]; 
            j--;
        }
        v[j+1] = key;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
