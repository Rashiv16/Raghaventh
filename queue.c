#include<stdio.h>
#include <stdlib.h>
# define NITEMS 5
# define Q_Full -1
# define Q_Empty -2
# define Q_Success 0
enum Q_Operations{ENQUEUE=1,DEQUEUE,DISPLAY,EXIT};
static int QUEUE[NITEMS];
static int front=-1;
static int rear=-1;
int Enqueue(int data)
{
    if(rear==NITEMS-1)
    {
        printf("Queue is Overflow\n");
        return Q_Full;
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear=rear+1;
        QUEUE[rear]=data;
        return Q_Success;
    }
}
int Dequeue()
{
    int data;
    if(rear==1||front>rear)
    {
        printf("Queue is underflow\n");
        return Q_Empty;
    }
    else
    {
        data=QUEUE[front++];
        return data;
    }
}

void display()
{
    int i;
    if(front==-1|| front>rear)
    {
        printf("Queue is underflow\n");
    }
    else
    {
        printf("Queue is:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",QUEUE[i]);
        }
    }

}

int main()
{
    int ch,item,i,ref;
    while(1)
    {
        printf("1.ENQUEUE\n");
        printf("2.DEQUEUE\n");
        printf("3.DISPLAY\n");
        printf("4.QUIT\n");
        printf("Ente your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case ENQUEUE:
            printf("Enter element to inser: ");
            scanf("%d",&item);
            if((ref=Enqueue(item))==Q_Full)
                printf("Queue is Full\n");
            break;

            case DEQUEUE:
            if((item=Dequeue())==Q_Empty)
                printf("Queue is empty\n");
            else
                printf("Dequeue item is %d\n",item);
            break;

            case DISPLAY:
            display();
            break;

            case 4:
            exit(0);
        }
    }
}
