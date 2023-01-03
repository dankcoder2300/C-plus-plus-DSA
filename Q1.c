#include <stdio.h>

int main()
{
    int n, t,k=0;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<0)
        {
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && k!=0)
        {
            t = arr[i];
            k--;

            for (int j = i; j < n; j++)
            {
                if (j < n - 1)
                {
                    arr[j] = arr[j + 1];
                }
                else
                {
                    arr[n-1] = t;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}