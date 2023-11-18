#include<stdio.h>
int main()
{
    int x,y,sum,mul,div;
    printf("enter the value of x and y");
    scanf("%d %d",&x,&y);
     sum = x+y;
    printf("addition of x and y is %d",sum);
    mul = x*y;
    printf("miltiplication of x and y is %d",mul);
    div = x/y;
    printf("division of x and y is %d",div);

    return 0;
}