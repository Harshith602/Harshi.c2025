#include<stdio.h>
int main()
{
    int n,c=1,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    if (n==0)
    {
        printf("1");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            c=c*i;
        }
        printf("%d",c);
    }
}
