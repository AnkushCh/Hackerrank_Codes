#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* left,*right;
    Node(int x)
    {
        data = x;
        left = right = 0;
    }
};

int main()
{
    Node *root = new Node(10);
    root->left = new Node(2);
    root ->right = new Node(13);
    printf("%d\n",root->data);
    printf("%d\n",root->left->data);
    printf("%d",root->right->data);
    return 0;
}