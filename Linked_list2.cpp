//creating a n node list
#include<bits/stdc++.h>
using namespace std;

struct node{
    int roll;
    string name;
    int age;
    struct node *link;
};
struct node *create_list()
{ 
 int c, n; 
 node *p, *head; 
 cout<<"\n How many elements to enter?"; 
 cin>>n; 
 for (c=0; c<n; c++) 
 { 
 if (c == 0) {
 head = (node *) malloc(sizeof(node)); 
 p = head; 
 }
 else {
 p->link = (node *) malloc(sizeof(node)); 
p = p->link; 
 }
 
cin>>p->roll;
getline(cin,p->name);
cin>>p->age; 
 } 
 p->link = NULL; 
 return (head);
}

int main()
{
    struct node *head;
    head=create_list();
    return 0;
}