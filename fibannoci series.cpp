#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, n1 = 0, n2 = 1, n3;
    cout << "Enter the number you want fibannoci series of: " << endl;
    cin >> n;
    if (n < 0)
    {
        cout << "Error!" << endl;
    }
    else if (n == 0)
    {
        cout << "0" << endl;
    }
    else if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "series: " << n1 << " " << n2 << " ";
        for (int i = 2; i < n; i++)
        {
            n3 = n1 + n2;
            cout << n3 << " ";
            n1 = n2;
            n2 = n3;
        }
    }
    return 0;
}