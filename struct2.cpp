#include<bits/stdc++.h>
using namespace std;

struct profile
{
string name;
int age;
float salary;
};
int main()
{
    profile myprofile1,myprofile2,myprofile3;
    myprofile1.name="Vishesh Pandey";
    myprofile1.age=20;
    myprofile1.salary=980000;

     myprofile2.name="Vikas Pandey";
    myprofile2.age=25;
    myprofile2.salary=980000;

 myprofile3.name="Avishi Pandey";
    myprofile3.age=19;
    myprofile3.salary=980000;


    cout<<"Name: "<<myprofile1.name<<"\n"<<"Age: "<<myprofile1.age<<"\n"<<"Salary: "<<myprofile1.salary<<"\n"<<endl;
    cout<<"Name: "<<myprofile2.name<<"\n"<<"Age: "<<myprofile2.age<<"\n"<<"Salary: "<<myprofile2.salary<<"\n"<<endl;
    cout<<"Name: "<<myprofile3.name<<"\n"<<"Age: "<<myprofile3.age<<"\n"<<"Salary: "<<myprofile3.salary<<"\n"<<endl;
    return 0;
}
