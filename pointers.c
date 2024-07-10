/*#include<stdio.h>
void main()
{
    int a=6;
    int *p=&a;
    printf("%p\n",&a);
    printf("%p\n",&p);
    printf("%d\n",*p);
}*/


#include<stdio.h>
void main()
{
    int a=5;
    int *ip=&a;
    float b=6, *fp=&b;
    double c=10, *dp=&c;
    printf("%p\t%p\t%p\n",&a,&b,&c);
    ip++;
    fp++;
    dp++;
    printf("%p\t%p\t%p\n",ip,fp,dp);
}