// Queue implementation using linked list 

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

struct node *front=NULL;
struct node *rear=NULL;

struct node *Enqueue(struct node *front,struct node *rear,int item)
{
    struct node *temp=(struct node*)malloc(sizeof(node));
    temp->data=item;
    temp->link=NULL;
    if(front==rear=='\0')       //empty queue
    {
        front=rear=temp;
    }
    else{
        rear->link=temp;
        rear=temp;
    }
}

struct node *Dequeue(struct node *front)
{
    struct node *temp=front;
    if(front==NULL)    //empty queue
    cout<<"Queue empty!" ;
    else if(front==rear)  //single element
    front=rear=NULL;
    else
    {
        // int data=front->data;
        front=front->link;
    }
    free(temp);
}

struct node *print(struct node *front)
{
   struct node *temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main()
{
    int item;
    struct node *temp=(struct node*)malloc(sizeof(node));
    struct node *head;
    
    head=Enqueue(front,rear,1);
    head=Enqueue(front,rear,2);
    head=Enqueue(front,rear,3);
    head=Dequeue(front);
    head=print(rear);
    return 0;
}