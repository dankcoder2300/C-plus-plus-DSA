// WAP to create linked list and traverse and print

#include <bits/stdc++.h>
using namespace std;

// creating node
struct node
{
    int data;
    struct node *link;
};

// //Creating function to print linked list/nodes
// void print_LL(struct node* ptr)
// {
//     while(ptr!=NULL)
//     {
//     cout<<"Element: "<<ptr->data<<endl;
//     ptr=ptr->link;
// }
// }
// int main()
// {
// struct node *head,*second,*third,*fourth;
// //Allocating memory for linked list in heap
// head=(struct node*)malloc(sizeof(node));
// second=(struct node*)malloc(sizeof(node));
// third=(struct node*)malloc(sizeof(node));
// fourth=(struct node*)malloc(sizeof(node));

// //Assigning values and linking nodes
// head->data=1;
// head->link=second;
// second->data=2;
// second->link=third;
// third->data=3;
// third->link=fourth;
// fourth->data=4;
// fourth->link=NULL;

// //Calling function to print linked list
// print_LL(head);
// }

// Function to print Linked List
void printfunc(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->link;
    }
}

// Function to count number of nodes in linked list
void count_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        cout << "Linked List is empty";
    }
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    cout << "Number of nodes: " << count;
}

// Function to insert new node at beginning of linked list
struct node *insert_beginning(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(node));
    ptr->link = head;
    ptr->data = data;
    return head;
}

// Function to Insert new node at specific index of a linked list
struct node *insert_at_index(struct node *head, int data, int index)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->link;
        i++;
    }
    ptr->data = data;
    ptr->link = p->link;
    p->link = ptr;
    return head;
}

// Function to insert  new node at end of a linked list
struct node *insert_at_end(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(node));
    struct node *p;
    p = head;
    while (p->link != NULL)
    {
        p = p->link;
    }
    p->link = ptr;
    ptr->data = data;
    ptr->link = NULL;
    return head;
}

// Function to insert new node after a specific node in a linked list
struct node *insertafternode(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->link = prevnode->link;
    prevnode->link = ptr;
    return head;
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(node));
    head->data = 1;
    head->link = NULL;

    struct node *current;
    current = (struct node *)malloc(sizeof(node));
    current->data = 2;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    printfunc(head);
    count_nodes(head);
    // head=insert_beginning(head,0);
    cout << "\n";
    //  head=insert_at_index(head,0,2);
    // head = insert_at_end(head, 4);
    head=insertafternode(head,current,0);
    printfunc(head);
    count_nodes(head);

    return 0;
}
