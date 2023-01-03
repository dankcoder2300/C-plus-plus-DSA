#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

// Function to print linked list
void print_ll(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->link;
    }
}

// Function to count number of nodes in a linked list
void count_nodes(struct node *head)
{
    struct node *ptr=head;
    int count=0;
    if (head==NULL)
    {
        cout<<"Linked list is empty";
    }
    while(ptr!=NULL)
    {
        ptr=ptr->link;
        count++;
    }
    cout<<"Number of nodes: "<<count<<endl;
}

    // Function to delete node at beginning
    struct node *delete_beginning(struct node *head)
    {
        struct node *temp;
        temp=head;
        head=head->link;
        free(temp);
        return head;
    }

    // Function to delete node at specific index
    struct node *delete_at_index(struct node *head,int index)
    {
        struct node *p=head;
        int i=0;
        while(i<index-1)
        {
         p=p->link;
         i++;
        }
        struct node *q;
        q=p->link;
        p->link=q->link;
        free(q);
        return head;
    }

    // Function to delete the last node of a linked list
    struct node *delete_last(struct node *head)
    {
        struct node *p=head;
        struct node *q=head->link;
        while(q->link!=NULL)
        {
            q=q->link;
            p=p->link;
        }
        p->link=NULL;
        free(q);
        return head;
    }

    // Function to delete the node with given value in linked list
    struct node *delete_at_value(struct node *head, int value)
    {
        struct node *p=head;
        struct node *q=head->link;
        while(q->data!=value && q->link!=NULL )
        {
        p=p->link;
        q=q->link;
        }
        if(q->data==value)
        {
            p->link=q->link;
            free(q);
        }
        return head;
    }

    struct node *ll_concatenation(struct node *head,struct node *head2)
    {
        struct node*temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=head2;
        return head;
    }
int main()
{
    struct node *head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(node));
    head->data=1;
    head->link=NULL;

    second=(struct node*)malloc(sizeof(node));
    second->data=2;
    second->link=NULL;
    head->link=second;
    
     third=(struct node*)malloc(sizeof(node));
    third->data=3;
    third->link=NULL;
    second->link=third;

 fourth=(struct node*)malloc(sizeof(node));
    fourth->data=4;
    fourth->link=NULL;
    third->link=fourth;

    struct node *head2,*second2;
    head2=(struct node*)malloc(sizeof(node));
    head2->data=10;
    head2->link=NULL;

    second2=(struct node*)malloc(sizeof(node));
    second2->data=11;
    head2->link=second2;
    second2->link=NULL;


print_ll(head);
count_nodes(head);
print_ll(head2);
count_nodes(head2);
ll_concatenation(head,head2);
print_ll(head);
count_nodes(head);
// head=delete_beginning(head);
// head=delete_at_index(head,1);
// head=delete_last(head);
// head=delete_at_value(head,4);
// print_ll(head);
// count_nodes(head);
return 0;
}