#include<bits/stdc++.h>
using namespace std;
// #define a 2
// int main()
// {
    // string firstname="Hello";
    // string lastname="World";
    // string combinedname=firstname.append(lastname);
    // cout<<combinedname;
    // cout<<"Lenghth of firstname is: "<<firstname.size()<<endl;
    /*firstname[0]='V';
    cout<<firstname;
    int x=15;
    int &y=x;
    cout<<x<<endl<<y;
    int a=15;
    float b=45.4;
    cout<<"The value of a is: "<<float(a)<<endl;
    cout<<"The value of a is: "<<(float)a<<endl;
    cout<<"The value of b is: "<<(int)b;
    // const int a=2;
    // cout<<a;
    int a=12,b=234,c=1234;
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
    string fullname;
    cout<<"Enter the full name: "<<endl;
    getline(cin,fullname);
    cout<<"Full name is: "<<fullname<<endl;
    int a=12.345,b=15,c=13;
    cout<<round(a);*/
    // return 0;
    // }
// int main()
// {
//     int n,k;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n][n],arr1[n][n];
//     cout<<"Enter the elements of array:\n";
//     for(int p=0;p<n;p++)
//     {
//         for(int q=0;q<n;q++)
//         {
//             cin>>arr[p][q];
//         }
//     }
//     cout<<"The elements of array are:\n";
//      for(int p=0;p<n;p++)
//     {
//         for(int q=0;q<n;q++)
//         {
//             cout<<arr[p][q]<<" ";
//         }
//         cout<<"\n";
//     }

// cout<<"\nEnter how many times you want to rotate array: ";
// cin>>k;
// for(int a=0;a<k;a++)
// {
// for(int j=0;j<n;j++)
// {
//     for(int i=n;i>0;i--)
//     {
//        arr1[i][j]=arr[j][i]; 
//     }
// }
// }

// for(int p=0;p<n;p++)
//     {
//         for(int q=0;q<n;q++)
//         {
//             cout<<arr1[p][q]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// Program to swap two alternate nos in an array
// int main()
// {
//     int n,temp=0;
// cout<<"enter the size of array: ";
// cin>>n;
// int arr[n];
// cout<<"Enter the elements of array: ";
// for(int i=0;i<n;i++)
// {
//     cin>>arr[i];
// }
// cout<<"\n";
// cout<<"The elements of array are: ";
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// for(int i=0;i<n-1;i+=2)
// {
//     temp=arr[i+1];
//     arr[i+1]=arr[i];
//     arr[i]=temp;

// }
// cout<<"Array after swapping is: ";
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// 

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++)
//   {
//       for(int j=1;j<=n;j++)
//       {
//         if(i+j>n)
//         cout<<"";
//         else
//         cout<<"*";
//       }
//       cout<<"\n";
//   }
//     return 0;
// }

// void func(int arr[],int n)
// {
//     for(int i=n-1;i>=0;i--)
//     {
//         cout<<arr[i]<<"\t";
//     }
// }


// int main()
// {
// int n;
// cout<<"Enter the size of array: ";
// cin>>n;
// int arr[n];
// cout<<"Enter the elements of array: ";
// for(int i=0;i<n;i++)
// {
//     cin>>arr[i];
// }
// func(arr,n);
//     return 0;
// }



// int main()
// {
//     string pass;
//     string salt;
//     cout<<"Enter the password: ";
//     getline(cin,pass);
//     cout<<"\nEnter the salt: ";
//     getline(cin,salt);
//     string newpass=pass.append(salt);
//     cout<<"New pasword after salting is : "<<newpass;
//     return 0;
// }

// void uppercase(char name[])
// {
//    int i;
//     char upd_name[100];
// for(int i=0;name[i]!='\0';i++)
// {
// upd_name[i]=name[i]+32;
// }

// for(int i=0;upd_name[i]!=0;i++){
//     cout<<upd_name[i];
// }
// }

// int main()
// {
//     char name[10]="VISHESH";
//     uppercase(name);
//     return 0;
// }                                 not completed yet


//  typedef struct address{
//     int house_no;
//     int block;
//     string city;
//     string state;
// }add;

// void output_address(add adds)
// {
//     cout<<"House number: "<<adds.house_no<<endl;
//     cout<<"Block "<<adds.block<<endl;
//     cout<<"City: "<<adds.city<<endl;
//     cout<<"State: "<<adds.state<<endl;
// }
// int main() {
// add adds[5];
// cout<<"Enter details of address[1]:"<<endl;
// cin>>adds[0].house_no;
// cin>>adds[0].block;
// getline(cin,adds[0].city);
// getline(cin,adds[0].state);
// cout<<"Enter details of address[2]:"<<endl;
// cin>>adds[1].house_no;
// cin>>adds[1].block;
// getline(cin,adds[1].city);
// getline(cin,adds[1].state);
// // cout<<")Enter details of address[3]:"<<endl;
// // cin>>adds[2].house_no;
// // cin>>adds[2].block;
// // cin>>adds[2].city;
// // cin>>adds[2].state;
// // cout<<"Enter details of address[4]:"<<endl;
// // cin>>adds[3].house_no;
// // cin>>adds[3].block;
// // cin>>adds[3].city;
// // cin>>adds[3].state;
// // cout<<"Enter details of address[5]:"<<endl;
// // cin>>adds[4].house_no;
// // cin>>adds[4].block;
// // cin>>adds[4].city;
// // cin>>adds[4].state;

// output_address(adds[0]);
// output_address(adds[1]);
//     return 0;
// }                           program not showing address[1] ouput


//create two vectors and calculate their sum
// struct vect
// {
// int x;
// int y;
// };

// void sum_vect(struct vect v1, struct vect v2, struct vect sum)
// {
//     sum.x=v1.x+v2.x;
//     sum.y=v1.y+v2.y;
//     cout<<"Sum of x is: "<<sum.x<<endl;
//     cout<<"Sum of y is: "<<sum.y<<endl;
// }
// int main()
// {
//     struct vect v1={4,6};
//     struct vect v2={2,8};
//     struct vect sum;
//     sum_vect(v1,v2,sum);
//     return 0;
// }

// create a structure to store complex number  (use array operator)

// struct cmplx{
//     int real;
//     int img;
// };

// int main()
// {
//     struct cmplx c1={2,4};
//     struct cmplx *ptr=&c1;
//     cout<<"Real part: "<<ptr->real;
//     cout<<"Imaginary part: "<<ptr->img;
//     return 0;
// }

// create a structure of a bank account to store information of customers of ABC bank (use alias)

// typedef struct account{
//     string name;
//     long long int acc_no;
//     float balance;
// }acc;

// int main()
// {
//     acc acct1;
//     cout<<"Enter the name of account holder: "<<endl;
//     getline(cin,acct1.name);
//     cout<<"Enter the account number: "<<endl;
//     cin>>acct1.acc_no;
//     cout<<"Enter the balance: "<<endl;
//     cin>>acct1.balance;
    
//     cout<<"The details of account are:"<<endl;
//     cout<<"Name: "<<acct1.name<<"\nAccount number: "<<acct1.acc_no<<"\nBalance: "<<acct1.balance<<endl;
//     return 0;
// }

// // malloc() function
// int main()
// {
//     int *ptr;
//     ptr=(int*)malloc(5*sizeof(int));
//     cout<<"Size of ptr: "<<sizeof(ptr);      //display size as 4 because memory is dynamically allocated at runtime not at compile time
//     ptr[0]=1;
//     ptr[1]=2;
//     ptr[2]=3;
//     ptr[3]=4;
//     ptr[4]=5;
//     cout<<"The elements in ptr are: \n";
//     for(int i=0;i<5;i++)
//     {
//         cout<<ptr[i]<<"\n";
//     }
//     return 0;
// }
void trick(int *temp1,int *temp2)
{
    int *temp=temp1;
    temp1=temp2;
    temp2=temp;

}
int main()
{
    int a=100;
    int b=200;
    int c=300;
    trick(&a,&b);
    trick(&a,&c);
    cout<<b<<endl;
    return 0;
}