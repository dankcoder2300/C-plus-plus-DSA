// Program to decide whether a person can vote or not
#include<bits/stdc++.h> // universal header file
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    switch(age)
    {
        case 1:
            cout<<"You can't vote:("<<endl;
            break;

        case 17:
        cout<<"You can vote for kids:'/"<<endl;
        break;

        case 18:
        cout<<"You can happily vote of your choice:)"<<endl;
        break;

        default:
        cout<<"Invalid age:|"<<endl;
        
    }
    return 0;
}