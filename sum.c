# include<stdio.h>
void fun1(char x, int y, int z);
struct stu
{
    char sec;
    int rollno;
    int marks;
};
void main()
{
    struct stu a={'B',25,68};
    fun1(a.sec,a.rollno,a.marks);
}
void fun1(char x, int y, int z);
{
    printf("%s %d %d",x,y,z);
}
