 #include <stdio.h>
int main() {
     int i,num,isprime=1;
    printf("Enter the number starting frim positive 2");
    scanf("%d",&num);
    if(num<=1)
    isprime=0;
    for(i=2;i<=2;i++)
    if(num%2==0)
    isprime=0;
    
    if(isprime)
    printf("%d is a prime");
    else
    printf("%d is not a prime");
     
    return 0;
}
