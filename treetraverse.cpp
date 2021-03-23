#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this-> data = data;
        left = right = NULL;
    }
};

TreeNode *insert(TreeNode *root, int item)
{
    if(root == NULL)
    {
        struct TreeNode * node = new TreeNode(item);
        return node;
    }
    if(item < root -> data)
    {
        root -> left = insert(root->left,item);
    }
    else root -> right = insert(root->right,item);

    return root;
}

void search(TreeNode * &cur,TreeNode* &parent, int item)
{
    while(cur != NULL && cur -> data != item)
    {
        parent = cur;
        if(item < cur -> data)
        cur = cur -> left;
        else cur = cur -> right;
    }
}

TreeNode* findMin(TreeNode *curr)
{
    while(curr -> left != NULL)
    curr = curr -> left;
    return curr;
}

TreeNode* delete_Node(TreeNode * &root, int item)
{
    TreeNode* parent = NULL;
    TreeNode* curr = NULL;
    search(curr,parent,item);
    if(curr -> left == NULL && curr -> right == NULL)
    {
        if(curr != root)
        {
            if(parent -> left==NULL)
            parent -> left == NULL;
            else parent -> right == NULL;
        }
        else root = NULL;
        free(root);
    }
    else if(curr -> left && curr -> right)
    {
        TreeNode* succ = findMin(curr -> right);
        int val = succ -> data;
        delete_Node(root,val);
        curr -> data = val;
    }
    else{
        TreeNode* child = curr -> left ? curr -> left: curr -> right;
        if(curr != root)
        {
            if(curr == parent -> left)
            parent -> left = child;
            else parent -> right = child;
        }
        else root = child;
        free(curr);
    }
}

void inorder(TreeNode *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
}