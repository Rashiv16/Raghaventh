#include<stdio.h>
#include <stdlib.h>
#define NITEMS 10
#define S_FULL -1
#define S_EMPTY -2
#define S_SUCCESS 0
enum stack_operations{PUSH=1,POP,DISP,EXIT};
static int stack[NITEMS];
static int sp=-1;
int push(int data)
{
    if(sp>=(NITEMS))
        return S_FULL;
    else
        stack[++sp]=data;
    return S_SUCCESS;
}

int pop()
{
    int data;
    if(sp==-1)
        return S_EMPTY;
    else
        data=stack[sp--];
    return data;
}

void display()
{
    int i;
    if(sp==-1)
        printf("Stack is empty\n");
    for(i=sp;i>=0;i--)
        printf("%d\n",stack[i]);
}

int main()
{
    int ch, item, i,ref;
    while(1)
    {
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.QUIT\n");
        printf("Ente your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case PUSH:
            printf("Enter element to insert: ");
            scanf("%d",&item);
            if((ref=push(item))==S_FULL)
                printf("Stack is Full\n");
            break;

            case POP:
            if((item=pop())==S_EMPTY)
                printf("Stack is empty\n");
            else
                printf("The popped item = %d\n",item);
            break;

            case DISP:
            display();
            break;

            case 4:
            exit(0);
        }
    }
}