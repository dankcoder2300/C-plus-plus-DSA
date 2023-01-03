#include<bits/stdc++.h>
using namespace std;

int main()
{
    struct
    {
        string name;
        int age;
        float salary;
    }profile1,profile2,profile3;

    profile1.age=20;
    profile1.name="Vishesh Pandey";
    profile1.salary=980000;

     profile2.age=25;
    profile2.name="Vikas Pandey";
    profile2.salary=980000;

     profile3.age=19;
    profile3.name="Avishi Pandey";
    profile3.salary=980000;

    cout<<"Name: "<<profile1.name<<"\n"<<"Age: "<<profile1.age<<"\n"<<"Salary: "<<profile1.salary<<"\n"<<endl;
    cout<<"Name: "<<profile2.name<<"\n"<<"Age: "<<profile2.age<<"\n"<<"Salary: "<<profile2.salary<<"\n"<<endl;
    cout<<"Name: "<<profile3.name<<"\n"<<"Age: "<<profile3.age<<"\n"<<"Salary: "<<profile3.salary<<"\n"<<endl;
    return 0;

}