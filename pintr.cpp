#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node *next;
};
void inst(node **head,int data)
{
  node *temp;
  temp = new node();
  temp -> data = data;
  temp -> next = *head;
  *head = temp;

}

void mid(node **head,int data)
{
  node *temp = new node();
  node *tr = *head;
  while(tr -> data != 14)
  {
      tr = tr -> next;
  }
  temp ->data = data;
  temp -> next = tr -> next;
  tr -> next = temp;
}
void last(node **head,int data)
{
  node *temp = new node();
  node *tr = *head;
  while(tr -> next != NULL)
  {
    tr = tr -> next;
  }
  temp -> data = data;
  temp -> next = NULL;
  tr -> next = temp;
}
void del(node **head,int x)
{
  node *temp = *head;
  node *prev;
  while(temp -> data != x)
  {
    prev = temp;
    temp = temp -> next;
  }
  prev -> next = temp -> next;
  free(temp);
}
void print(node *ptr)
{
  while(ptr -> data != NULL)
  {
    cout << ptr -> data <<" ";
    ptr = ptr -> next;
  }
}
int main()
{
  node *head = NULL;
  node *first = NULL;
  node *third = NULL;
head = new node();
first = new node();
third = new node();
head -> data = 12;
head -> next = first;
first -> data = 14;
first -> next = third;
third -> data = 19;
third -> next = NULL;
inst(&head,8);
mid(&head,15);
last(&head,20);
del(&head,15);
del(&head,8);
del(&head,20);
print(head);

    return 0;
  }
