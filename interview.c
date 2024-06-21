//Reverse a string using pointer:

/*#include<stdio.h>
#include<string.h>
void reversestring(char * str);
void main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    reversestring(str);
}
void reversestring(char *str)
{
    char *start=str;
    char *end=str+strlen(str)-1;
    char temp;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("The reversed string is %s\n",str);
}*/

//Dynamic Memory Allocation:

/*#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int)); //p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    printf("The numbers are: ");
    for(i=0;i<n;i++)
        printf("%d\t",p[i]);
    printf("\n");
    free(p);
    p=NULL;
}*/

//Bubble sort:

/*#include<stdio.h>
void main()
{
    int a[10],i,j,temp;
    printf("Enter the numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
    printf("\n");
}*/


// Remove duplicate elements in the string:

/*#include<stdio.h>
void main()
{
    char str[50],currentchar;
    char unique[256]={0};
    printf("Enter the string: ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        currentchar=str[i];
        if(unique[currentchar]==0)
        {
            printf("%c",currentchar);
            unique[currentchar]=1;
        }
    }
    printf("\n");
}*/


//Call by Value:

/*#include<stdio.h>
void myfun(int a, int b);
void main()
{
    int a=5,b=2;
    myfun(a,b);
    printf("a=%d b=%d\n",a,b);
}
void myfun(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d\n",a,b);
}*/


//Call by Reference:

/*#include<stdio.h>
void myfun(int *a, int *b);
void main()
{
    int a=5,b=7;
    myfun(&a,&b);
    printf("a=%d b=%d\n",a,b);
}
void myfun(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("a=%d b=%d\n",*a,*b);
}*/

//Function Pointer:

#include<stdio.h>
float fun(int a, float b);
void main()
{
    int a=5;
    float b=3.14,z;
    void(*fp)(int, float);
    fp=fun;
    z=(*fp)(a,b);
}
float fun(int a, float b)
{
    printf("%f\n",a+b);
    return a+b;
}