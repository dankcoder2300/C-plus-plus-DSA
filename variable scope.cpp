#include <iostream>
using namespace std;

int glo = 2;

void sum()
{
    int a = 3;
    cout << glo;
}
int main()
{
    int glo = 4;
    glo = 8;
    int a = 2;
    sum();
    cout << glo;
    cout<<::glo;
    return 0;
}