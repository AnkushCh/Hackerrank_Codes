#include<iostream>
#include<cstring>
using namespace std;

struct student
{
    char name[20];
    int roll;
    float marks;
    void hello()
    {
        cout << " hello function";
    }
};

class Node
{
    public:
    int data;
    Node *next;
};

void push(Node **head_ref, int data)
{
    Node *ptr1 = new Node();
    Node *temp = *head_ref;
    ptr1 ->data = data;
    ptr1 ->next = *head_ref;

    if(*head_ref != NULL)
    {
        while(temp -> next != *head_ref)
        {
            temp = temp -> next;
            temp -> next = ptr1;
        }
    }
    else 
    {
        ptr1 ->next = ptr1;
        *head_ref = ptr1;
    }
}

void printlist(Node *head)
{
    Node *temp = head;
    if(head != NULL)
    {
        do{
            cout << temp->data<<" ";
            temp = temp -> next;
        }while(temp != head);
    }
}

int main()
{
    Node *head = NULL;
    push(&head,12);
    push(&head,34);
    push(&head,3);
    push(&head,31);
    printlist(head);

    return 0; 
}