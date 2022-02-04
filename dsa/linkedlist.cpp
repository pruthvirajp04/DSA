#include<iostream>
using namespace std;
class node{
public :
int data;
node* next;
node(int val)
{
    data = val;
    next = NULL;
}
};
void insertatTail(node* &head,int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n; return;
    }
    node* temp = head;
    while(temp->next !=NULL)
    {
        temp = temp-> next;
    }
    temp->next = n;
}
void display(node* head)
{
    node* temp=head;
    while(temp != NULL)
    {
        if(temp->next==NULL)
    {
        cout<<temp->data<<"->NULL"<<endl; break;
    }
    
        cout<<temp->data<<"->";
        temp = temp->next;
    }

}
void deleteElement(node* head, int n)
{
    node* temp = head;
    node* prev = head;
    while(temp->data != n)
    {
        prev = prev->next;
        temp = temp->next;
    }
    prev -> next = temp->next;
}
int main()
{


    node* head = NULL;
    insertatTail(head,12);
    insertatTail(head,23);
    display(head);
    node* head2 = NULL;         // new node with some other head
    insertatTail(head2,34);
    insertatTail(head2,45);
    insertatTail(head2,56);
    display(head2);
 



    return 0;
}