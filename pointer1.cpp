#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name="Vishesh Pandey";
    string* myname=&name;        //referncing of pointer

    cout<<"Name: "<<name<<endl;
    cout<<"Address of name: "<<myname<<endl;
    cout<<"myname: "<<*myname<<"\n"<<endl;        //dereferencing of a pointer

    *myname="Vishesh_Pandey";
// changing value of name
     cout<<"Name: "<<name<<endl;
    cout<<"Address of name: "<<myname<<endl;
    cout<<"myname: "<<*myname<<endl;

    

    return 0;
}