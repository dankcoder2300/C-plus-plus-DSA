// Implementation of queue using array

#include <bits/stdc++.h>
using namespace std;

int front = -1, rear = -1;

void Enqueue(int item, int arr[], int n)
{
    if (rear == (n - 1))
    {
        cout << "Queue Full!" << endl;
        return;
    }
    else if (front == -1 && rear == -1)
    {
        rear++, front++;
        arr[rear] = item;
    }
    else
    {
        rear++;
        arr[rear] = item;
    }
}

int Dqueue(int arr[],int n)
{
    if(front==rear==-1)
    {
        cout<<"Queue Empty!"<<endl;
        return 1;
    }
    else if(front==rear)
    {
        int data=arr[front];
        front==rear==-1;
        return data;
    }
    else{
        int data=arr[front];
        front++;
        return data;
    }
}

void print(int arr[])
{
    for (int i = front; i <= rear; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n,data;
    cout << "Enter the size of queue: ";
    cin >> n;
    int arr[n];
    Enqueue(1, arr, 5);
    Enqueue(2, arr, 5);
    Enqueue(3, arr, 5);
    Enqueue(4, arr, 5);
    data=Dqueue(arr,5);
    print(arr);
    return 0;
}