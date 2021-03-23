#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node *next;
  node *prev;
};
void inst(node **head,int data)
{
  node *temp = new node();
  temp -> data = data;
  temp -> next = *head;
  temp -> prev = NULL;
  *head -> prev = temp;
  *head = temp;
}

// void mid(node **head,int data)
// {
//   node *temp = new node();
//   node *tr = *head;
//   while(tr -> data != 14)
//   {
//       tr = tr -> next;
//   }
//   temp ->data = data;
//   temp -> next = tr -> next;
//   tr -> next = temp;
// }
// void last(node **head,int data)
// {
//   node *temp = new node();
//   node *tr = *head;
//   while(tr -> next != NULL)
//   {
//     tr = tr -> next;
//   }
//   temp -> data = data;
//   temp -> next = NULL;
//   tr -> next = temp;
// }
// void del(node **head,int x)
// {
//   node *temp = *head;
//   node *prev;
//   while(temp -> data != x)
//   {
//     prev = temp;
//     temp = temp -> next;
//   }
//   prev -> next = temp -> next;
//   free(temp);
// }

void print(node *ptr)
{ 
    node *last;
    cout <<" In Forward direction: ";
  while(ptr != NULL)
  {
    cout << ptr -> data <<" ";
    last = ptr;
    ptr = ptr -> next;
  }
  cout << "\nIn backward direction: ";
  while(last != NULL)
  {
      cout << last -> data << " ";
      last = last -> prev;
  }
}
int main()
{
  node *head = NULL;
  node *sec = NULL;
  node *third = NULL;

head = new node();
sec = new node();
third = new node();

head -> data = 12;
head -> next = sec;
head -> prev = NULL;

sec -> data = 14;
sec -> next = third;
sec -> prev = head;

third -> data = 19;
third -> next = NULL;
third -> prev = sec;

inst(&head,8);
// mid(&head,15);
// last(&head,20);
// del(&head,15);
// del(&head,8);
// del(&head,20);

print(head);

    return 0;
  }
