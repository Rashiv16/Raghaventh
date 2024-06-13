#include<stdio.h>
#include<stdlib.h>
struct stu 
{
    int rollno;
    struct stu *next;
};
void main()
{
    int ch,pos,addroll,i,dpos,search,flag=0;
    struct stu *head=NULL, *new, *prev, *temp, *next1;
    while(1)
    {
        printf("Linked list menu\n");
        printf("1.Add\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Add node at beginning\n");
        printf("5.Delete at beginning\n");
        printf("6.Add at given poition\n");
        printf("7.Delete at given position\n");
        printf("8.Reverse\n");
        printf("9.Search Node\n");
        printf("10.Quit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
            new=(struct stu *)malloc(sizeof(struct stu));
            printf("Enter Roll Number: ");
            scanf("%d",&new->rollno);
            new->next=NULL;
            if(head==NULL)
                head=new;
            else
            {
                temp=head;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=new;
            }
            break;
            case 3:
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
            case 2:
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
            case 4:
            new=(struct stu*)malloc(sizeof(struct stu));
            printf("Enter roll number: ");
            scanf("%d",&new->rollno);
            if(head==NULL)
                head=new;
            else
            {
                temp=head;
                new->next=temp;
                head=new;
            }
            break;
            case 5:
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
                    head=head->next;
                    free(temp);
                }
            }
            break;
            case 6:
            printf("Enter position: ");
            scanf("%d",&pos);
            printf("Enter roll number: ");
            scanf("%d",&addroll);
            new=(struct stu*)malloc(sizeof(struct stu));
            new->rollno=addroll;
            new->next=NULL;
            if(head==NULL)
                head=new;
            else
            {
                temp=head;
                prev=NULL;
                for(i=1;i<pos && temp!=NULL;i++)
                {
                    prev=temp;
                    temp=temp->next;
                }
                new->next=temp;
                prev->next=new;
            }
            break;
            case 7:
            printf("Enter position:\n");
            int pos,i,count=0;
            scanf("%d",&pos);
            if(head==NULL)
                printf("List is empty\n");
            else
            {
                temp=head;
                while(temp!=NULL)
                {
                    count++;
                    temp=temp->next;
                }
                temp=head;
                if(pos==1)
                {
                    head=temp->next;
                    free(temp);
                    temp=NULL;
                }
                else if(count>=pos)
                    {
                        temp=head;
                        for(i=1;i<pos-1;i++)
                        {    
                            temp=temp->next;
                        }
                        struct stu* nextnode=temp->next;
                        temp->next=nextnode->next;
                        free(nextnode);
                    }
                else
                    printf("Given position is not valid\n");
            }
            break;
            case 8:
            if(head==NULL)
                printf("List is empty\n");
            else
            {
                temp=head;
                prev=NULL;
                while(temp!=NULL)
                {
                    next1=temp->next;
                    temp->next=prev;
                    prev=temp;
                    temp=next1;
                }
                head=prev;
            }
            break;
            case 9:
            printf("Enter the number to search: ");
            scanf("%d",&search);
            if(head==NULL)
                printf("List is empty\n");
            else
            {
                temp=head;
                while(temp!=NULL)
                {
                    if(temp->rollno==search)
                    {
                        flag=1;
                        break;
                    }
                    temp=temp->next;
                }
                if(flag)
                    printf("%d is present\n",search);
                else
                    printf("%d is not present\n",search);
            }
            break;
            case 10:
            printf("You quit the program\n");
            exit(0);
            default:
            printf("Invalid choice\n");
        }
    }
}