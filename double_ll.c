#include<stdio.h>
#include<stdlib.h>
struct stu
{
    int rollno;
    struct stu *next;
    struct stu *prev;
};
void main()
{
    int ch,data;
    struct stu *head=NULL,*prev,*new,*temp;
    while(1)
    {
        printf("Double linked list menu\n");
        printf("1.Add\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Add node at beginning\n");
        printf("5.Delete node at beginning\n");
        printf("6.Add at particular position\n");
        printf("7.Delete node at given position\n");
        printf("8.Search the node\n");
        printf("9.Reverse the node\n");
        printf("10.Quit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter roll number: ");
            scanf("%d",&data);
            new=(struct stu*)malloc(sizeof(struct stu));
            new->rollno=data;
            new->next=NULL;
            new->prev=NULL;
            if(head==NULL)
                head=new;
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=new;
                new->prev=temp;
            break;
            }
            case 2:
            if(head==NULL)
                printf("List is empty\n");
            else
            {
                temp=head;
                if(temp->next==NULL)
                {
                    free(temp);
                    temp=NULL;
                    head=NULL;
                }
                else
                {
                    temp=head;
                    prev=NULL;
                    while(temp->next!=NULL)
                    {
                        prev=temp;
                        temp=temp->next;
                    }
                    prev->next=NULL;
                    free(temp);
                }
            }
            break;
            case 3:
            if(head==NULL)
                printf("List is empty\n");
            else
            {
                temp=head;
                while(temp!=NULL)
                {
                    printf("%d\n",temp->rollno);
                    temp=temp->next;
                }
            }
            break;
        }
    }
}