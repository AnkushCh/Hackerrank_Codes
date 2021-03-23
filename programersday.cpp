#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*left,*right;
};
node *newnode(int data)
{
    node* temp = new node;
    temp ->data = data;
    temp -> left = temp ->right = NULL;
    return temp;
}
int main(){
        
    
    
    
    return 0;
}