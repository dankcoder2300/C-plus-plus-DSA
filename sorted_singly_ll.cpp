#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

void printfunc(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
struct node *addtoempty(int data )
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(node));
    temp->data=data;
    temp->link=NULL;
    return temp;
}

struct node *addtoend(struct node *head,int data)
{
    struct node *temp=head;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(node));
    newnode->data=data;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=newnode;
    newnode->link=NULL;
    return head;
}

struct node *insert(struct node *head,int data)
{
    struct node *temp=head;
    struct node *newnode=(struct node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->link=NULL;
    int key=newnode->data;
    if(head==NULL || key<head->data )
    {
        newnode->link=head;
        head=newnode;
    }

    else{
        while(temp->link!=NULL && key>temp->link->data)
        {
            temp=temp->link;
        }
        newnode->link=temp->link;
        temp->link=newnode;
    }
    return head;
}

int main()
{
    struct node *head=NULL;
    head=addtoempty(1);
    head=addtoend(head,2);
    head=addtoend(head,3);
    head=addtoend(head,5);
    printfunc(head);
    cout<<"\n";
    head=insert(head,4);
    printfunc(head);

    return 0;
}