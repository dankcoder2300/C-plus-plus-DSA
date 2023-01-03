//Program to reverse original stack using two temporary stack using linked list

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};
struct node* push(int data,struct node *top)
{
    struct node *temp=(struct node*)malloc(sizeof(node));
    temp->data=data;
    temp->link=top;
    top=temp;
    return top;
}

struct node* pop(struct node *top)
{
    struct node *temp=(struct node*)malloc(sizeof(node));
    temp=top;
    top=top->link;
    return temp;
}

void print_stack(struct node *top)
{
    struct node *temp=top;
while(temp)
{
    cout<<temp->data<<" ";
    temp=temp->link;
}
}

int main()
{
    struct node *top1=NULL,*top2=NULL,*top3=NULL;
    struct node *temp=(struct node*)malloc(sizeof(node));
    int n,data;
    cout<<"Enter the no of elements: ";
    cin>>n;
    while(n--)
    {
        cout<<"Enter the data: ";
        cin>>data;
        top1=push(data,top1);
    }
    cout<<"The elements in original stack are: ";
    print_stack(top1);
    while(top1!=NULL)
    {
temp=pop(top1);
top1=temp->link;
top2=push(temp->data,top2);
    }
    cout<<"\nElements in temporary stack1 are: ";
    print_stack(top2);
    while(top2!=NULL)
    {
        temp=pop(top2);
        top2=top2->link;
        top3=push(temp->data,top3);
    }
    cout<<"\nElements in temporary stack2 are: ";
    print_stack(top3);

    while(top3!=NULL)
    {
        temp=pop(top3);
        top3=temp->link;
        top1=push(temp->data,top1);
    }
    cout<<"\nElements of Original stack after reversing are: ";
print_stack(top1);
    return 0;
}
