//Arrays assigning and print values:

/*#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Enter the numbers: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        printf("Value at %d is %d\n",i,a[i]);
    printf("\n");
}*/

//Sum of elements in the array:

/*#include<stdio.h>
void main()
{
    int a[5],i,sum;
    printf("Enter the numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum of elemnts of the array is %d\n",sum);
}*/

//Count Odd and Even numbers in Array:

/*#include<stdio.h>
void main()
{
    int a[5],i,o_count=0,e_count=0;
    printf("Enter the numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            e_count++;
        else
            o_count++;
    }
    printf("The count of even numbers in array is %d\n",e_count);
    printf("The count of odd numbers in array is %d\n",o_count);
}*/

//Largest and smallest element:

/*#include<stdio.h>
void main()
{
    int a[5],i,largest,smallest;
    printf("Enter the numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        
    }
    smallest=largest=a[0];
    for(i=1;i<4;i++)
    {
        if(a[i]>largest)
            largest=a[i];
        if(a[i]<smallest)
            smallest=a[i];
    }
    printf("The largest element in array is %d\n",largest);
    printf("The smallest element of array is %d\n",smallest);
}*/

//Reverse of an Array:

/*#include<stdio.h>
#define N 6
void main()
{
    int a[N],i,temp;
    printf("Enter the numbers: ");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<6/2;i++)
    {
        temp=a[i];
        a[i]=a[N-i-1];
        a[N-i-1]=temp;
    }
    for(i=0;i<6;i++)
        printf("%d\t",a[i]);
    printf("\n");
}*/

//Swapping the adjacent elements:

/*#include<stdio.h>
#define N 6
void main()
{
    int a[N],i,temp;
    printf("Enter the numbers: ");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i=i+2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(i=0;i<N;i++)
        printf("%d\t",a[i]);
    printf("\n");
}*/

//Swapping of first half to next half:

/*#include<stdio.h>
#define N 6
void main()
{
    int a[N],i,temp;
    printf("Enter the numbers: ");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N/2;i++)
    {
        temp=a[i];
        a[i]=a[i+(N/2)];
        a[i+(N/2)]=temp;
    }
    for(i=0;i<N;i++)
        printf("%d\t",a[i]);
    printf("\n");
}*/

//Ascending order by using Selection sort:

/*#include<stdio.h>
#define N 10
void main()
{
    int a[N],i,j,temp;
    printf("Enter the numbers: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
        printf("%d\t",a[i]);
    printf("\n");
}*/

//Bubble sort:

#include<stdio.h>
void main()
{
    int a[10]={3,7,4,1,9,10,6,2,8,5},i,j,temp;
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
}