#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

void print_func(struct node *head)
{
    struct node *ptr=head;
    // method1:
    // cout<<ptr->data<<endl;
    // ptr=ptr->link;
    // while(ptr!=head)
    // {
    //     cout<<ptr->data<<endl;
    //     ptr=ptr->link;
    // }

//   method2
// while(ptr->link!=head)
// {
//     cout<<ptr->data<<endl;
//     ptr=ptr->link;
// }
//  cout<<ptr->data<<endl;

// method3
do
{
    cout<<ptr->data<<endl;
    ptr=ptr->link;
} while (ptr!=head);

}

// Function to insert a node at beginning of a circular linked list
struct node *insert_beginning(struct node *head,int data)
{
    struct node *ptr=head;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(node));
    while(ptr->link!=head)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
    temp->data=data;
    temp->link=head;
    head=temp;
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
    fourth->link=head;
    third->link=fourth;

print_func(head);
cout<<endl;
head=insert_beginning(head,0);
print_func(head);
return 0;
}