#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

// Function to print doubly linked list
void print_ll(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    do{
        cout<<ptr->data<<endl;
        ptr=ptr->prev;
    }
    while(ptr->prev!=NULL);
    
}
int main()
{
    struct node *head,*second,*third,*fourth;

    head=(struct node*)malloc(sizeof(node));
    second=(struct node*)malloc(sizeof(node));
    third=(struct node*)malloc(sizeof(node));
    fourth=(struct node*)malloc(sizeof(node));

    head->data=1;
    head->prev=NULL;
    head->next=second;

    second->data=2;
    second->prev=head;
    second->next=third;

    third->data=3;
    third->prev=second;
    third->next=fourth;

    fourth->data=4;
    fourth->prev=third;
    fourth->next=NULL;

    print_ll(head);
    return 0;
}
