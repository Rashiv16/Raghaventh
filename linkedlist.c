#include<stdio.h>
#include<stdlib.h>
struct stu
{
    int rollno;
    char sec;
    struct stu *next;
};
void main()
{
    int ch;
    struct stu *Head=NULL,*new=NULL,*new1=NULL;
    Head=(struct stu*)malloc(sizeof(struct stu));
    Head->rollno=16;
    Head->sec='B';
    Head->next=NULL;
    new=(struct stu*)malloc(sizeof(struct stu));
    new->rollno=31;
    new->sec='S';
    new->next=NULL;
    Head->next=new;
    new1=(struct stu*)malloc(sizeof(struct stu));
    new1->rollno=10;
    new1->sec='L';
    new1->next=NULL;
    new->next=new1;
    struct stu *temp=Head;
    while(temp != NULL)
    {
        printf("%d %c\n",temp->rollno,temp->sec);
        temp=temp->next;
    }
}