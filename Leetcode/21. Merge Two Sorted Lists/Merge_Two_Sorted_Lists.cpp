#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *link;
};
struct Node *head;
void print()
{
    struct Node* t = head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->link;
    }

}
void insertAtTheEnd(int value)
{
    struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node* t;
        t=head;
        if(t->link!=NULL)
        {
            t=t->link;
        }
        t->link = temp;
    }

}
void insert(int value){
    struct Node *temp = (struct  Node*) malloc(sizeof(struct Node));
    temp->data = value;
    if(head == NULL){
        temp->link = head;
        head = temp;
    }
}
int main()
{
    head = NULL;
    int l1, l2;
    while(cin>>l1)
    {
        insertAtTheEnd(l1);
        print();
    }
}
