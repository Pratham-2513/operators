#include <stdio.h> 
 int main() 
{
    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&a, &b, &c);
    printf("a=%d,\nb=%d,\nc=%d.",a,b,c);
    if (a<b&&c>b)
    printf("%d",(a+b+c)/3);
    else if ((a==b||b==c) && (a<=b||b>=c))
    printf("%d",(a*b*c)/3);
    else
    printf("\nError!!");
   return 0; 
} 
