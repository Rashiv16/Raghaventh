#include<stdio.h>
int fun(int a,int b);
void main()
{
    int a,b,z;
    z=fun(a,b);
    printf("Sum = %d\n",z);
}
int fun(int a, int b)
{
    int add;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    add=a+b;
    return add;
}