#include <stdio.h>
int main() 
{
    int marks;
    printf("enter rour marks :");
    scanf("%d",&marks);
    if(marks>=85)
    {
        printf("%d is distinction");
    
    }
    else if (marks>=70)
    {
        printf("%d is first class ");
        
    }
    else if(marks>=50)
    {
        printf("%d is just pass");
    }
    return 0;
}
