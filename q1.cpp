#include<iostream>
#include<string>
using namespace std;
int main()
{
 int a, b;
    cin >> a >> b;
    string c[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            cout << c[i] << endl;
        }
        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << c[10] << endl;
            }
            else
            {
                cout << c[11] << endl;
            }
        }
    }

    return 0;
}
