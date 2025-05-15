#include<stdio.h>
#include<math.h>
 int main()
 {
    int res=0,rem,org,num;
    printf("Enter the value number");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        rem=num%10;
        res= res+rem*rem*rem;
        num=num/10;
    }
     if(org==res)
     printf("%d is a amstrong",org);
     else
     printf("%d is not a amstrong.",org);
 }
