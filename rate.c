#include <stdio.h>
int main()
{
    int amt,Time;
    float roi,SI;
    printf("enter the principle ammount:");
    scanf("%d",&amt);
    printf("enter time");
    scanf("%d",&Time);
    printf("enter rate of intrest:");
    scanf("%f",&roi);
    SI=(amt*Time*roi)/100;
    printf("simple intrest is:%.2f\n",SI);
    
    return 0;
    
}
