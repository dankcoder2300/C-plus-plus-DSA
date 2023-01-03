#include <bits/stdc++.h>
using namespace std;

struct node
{
    float coeff;
    int expo;
    struct node *link;
};

struct node *insert(struct node *head, int co, int ex)
{
    struct node *temp = head;
    struct node *newnode = (struct node *)malloc(sizeof(node));
    newnode->coeff = co;
    newnode->expo = ex;
    newnode->link = NULL;

    if (head == NULL || ex > head->expo)
    {
        newnode->link = head;
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->link != NULL && ex < temp->link->expo)
        {
            temp = temp->link;
        }
        newnode->link = temp->link;
        temp->link = newnode;
    }
    return head;
}

struct node *create(struct node *head)
{
    int n;
    float coeff;
    int expo;
    cout << "Enter the number of terms in polynomial: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the coefficient of " << i << " term: ";
        cin >> coeff;
        cout << "Enter the exponent of " << i << " term: ";
        cin >> expo;

        head = insert(head, coeff, expo);
    }
    return head;
}

void printfunc(struct node *head)
{
    if (head == NULL)
    {
        cout << "No polynomial!";
    }
    else
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            cout << temp->coeff << "x^" << temp->expo;
            temp = temp->link;
            if (temp != NULL)
            {
                cout << "+";
            }
            else
            {
                cout << "\n";
            }
        }
    }
}

void polyAdd(struct node *head1, struct node *head2)
{
    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    struct node *head3 = NULL;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->expo == ptr2->expo)
        {
            head3 = insert(head3, ptr1->coeff + ptr2->coeff, ptr1->expo);
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }
        else if (ptr1->expo > ptr2->expo)
        {
            head3 = insert(head3, ptr1->coeff, ptr1->expo);
            ptr1 = ptr1->link;
        }
        else if (ptr1->expo < ptr2->expo)
        {
            head3 = insert(head3, ptr2->coeff, ptr2->expo);
            ptr2 = ptr2->link;
        }
    }

    while (ptr1 != NULL)
    {
        head3 = insert(head3, ptr1->coeff, ptr1->expo);
        ptr1 = ptr1->link;
    }
    while (ptr2 != NULL)
    {
        head3 = insert(head3, ptr2->coeff, ptr2->expo);
        ptr2 = ptr2->link;
    }
    printf("Polynomial after addition is: ");
    printfunc(head3);
}
int main()
{

    struct node *head1 = NULL;
    struct node *head2 = NULL;
    printf("Enter the First polynomial\n");
    head1 = create(head1);
    printf("Enter the second polynomial\n");
    head2 = create(head2);

    polyAdd(head1, head2);
    return 0;
}