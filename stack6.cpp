//Implementing stack as linked list
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

struct node *top=NULL;

void push(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(node));
    temp->data=data;
    temp->link=top;
    top=temp;
}

int pop()
{
    struct node *temp=(struct node*)malloc(sizeof(node));
    temp=top;
    int value=top->data;
    top=top->link;
    free(temp);
    return value;

}

void print_stack()
{
    struct node *temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main()
{
    while(1)
    {
    cout<<"1-Push an element into stack"<<endl;
    cout<<"2-Pop an element from stack"<<endl;
    cout<<"3-Print the stack"<<endl;
    cout<<"4-Exit"<<endl;
    cout<<"Enter your choice: ";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter the data: ";
        int data;
        cin>>data;
        push(data);
        break;

        case 2:
        int value;
        value=pop();
        break;

        case 3:
        print_stack();
        break;
    
        case 4:
        exit(1);
        break;

        default:
        cout<<"INVALID INPUT:|";
    }
    cout<<"\n";
    }
    return 0;
}