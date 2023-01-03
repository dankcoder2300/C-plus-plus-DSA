#include<bits/stdc++.h>
using namespace std;

struct name
{
    string first_name;
    string last_name;
};

struct student
{
    struct name N ;
    int roll_no;
    float salary;

};

int main()
{
    struct student myprofile1;
    myprofile1={"Vishesh","Pandey",48,9999999};
    cout<<myprofile1.roll_no;
    return 0;
}
