#include<stdio.h>

int main()
{
    int n,c=0,sum1=0,sum2=0,k=0;
    printf("Enter how many numbers you want: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The numbers are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<=i;j++)
        {
            sum1=sum1+arr[j];
        }
        for(int k=i+2;k<n;k++)
        {
            sum2=sum2+arr[k];
        }
        
       
        if(sum1==sum2)
        {
            c=1;
            printf("true ");
            printf("%d",i+1);
            break;
        }
        else
        {
        sum1=0;
        sum2=0;
        }
    }
    if(c==0)
    printf("false");
return 0;
}