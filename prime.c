// Check prime number:

/*#include<stdio.h>
void main()
{
    int n,i,flag=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0||n==1)
        flag=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is Prime number\n",n);
    else
        printf("%d is not prime number\n",n);
}*/


// Prime number in given range:
/*#include<stdio.h>
void main()
{
    int lower,upper,i,j,flag=0;
    printf("Enter lower range: ");
    scanf("%d",&lower);
    printf("Enter the upper range: ");
    scanf("%d",&upper);
    for(i=lower;i<=upper;i++)
    {
        if(i==0||i==1)
            continue;
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d\t",i);
    }
}*/

// Armstrong number: 

/*#include<stdio.h>
void main()
{
    int n,temp,res,digit,sum;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        sum=digit*digit*digit;
        res=res+sum;
        temp=temp/10;
    }
    if(n==res)
        printf("%d is Armstrong number\n",n);
    else
        printf("%d is not armstrong number\n",n);
}*/

//Reverse a Number:

/*# include<stdio.h>
void main()
{
    int n,digit,rev_no=0,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        rev_no=rev_no*10+digit;
        temp=temp/10;
    }
    printf("The reverse number is %d\n",rev_no);
}*/

//  Check a number is palindrome or not:

/*# include<stdio.h>
void main()
{
    int n,digit,rev_no=0,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        rev_no=rev_no*10+digit;
        temp=temp/10;
    }
    if(rev_no==n)
        printf("%d is palindrome\n",n);
    else
        printf("%d is not palindrome\n",n);
}*/

//Sum of digits of number:

/*#include<stdio.h>
void main()
{
    int n,sum,digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("The sum of digits is %d\n",sum);
}*/

//Product of the digits:

#include<stdio.h>
void main()
{
    int n,prod=1,digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        prod=prod*digit;
        n=n/10;
    }
    printf("The product of digits is %d\n",prod);
}