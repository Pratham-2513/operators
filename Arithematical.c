#include <stdio.h>
int main()
{
    int x,y,sum,difference,product,modulus;
    float division;
    scanf("%d %d",&x,&y);
    sum=x+y;
    difference=x-y;
    product=x*y;
    division=x/y;
    modulus=x%y;
    printf("The sum of x and y is %d\nThe difference of x and y is %d\nThe product of x and y is %d\nThe quotitent of x and y is %.2f\nThe remainder of x and y is %d", sum,difference,product,division);
    return 0;
}
