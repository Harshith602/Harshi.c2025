#include <stdio.h>
int main(){
int x=10,y=20;
int temp;
temp=x;
x= y;
y= temp;
printf("after swap: x=%d,%d\n",x,y);
return 0;
}
