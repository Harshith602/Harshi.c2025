#include<stdio.h>
 int main()
 {
    int rev=0,rem,org,num;
    printf("Enter the number");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        rem=num%10;
        rev= rev*10+rem;
        num=num/10;
    }
     if(org==rev)
     printf("%d is a palindrome.",rev);
     else
     printf("%d is not a palindrome.",rev);
 }
