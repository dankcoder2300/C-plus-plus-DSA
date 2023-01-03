#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, ans = 0, i = 0;

    cin >> n;
    while (n != 0)
    {
        int bit = n & 1;
        bit = !bit;
        ans = bit * pow(10, i) + ans;
        i++;
        n = n >> 1;
    }
    cout << "complement:" << ans << endl;
    int ans1 = 0, j = 0;
    while (ans != 0)
    {
        int digit = ans % 10;
        ans1 = digit * pow(2, j) + ans1;
        ans = ans / 10;
        j++;
    }
    cout << "Value of complement:" << ans1;

    return 0;
}