#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int i,count,n;
    fp=fopen("word.txt","r");
    n=atoi(argv[1]);
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
        count++;
        if(count%n==0)
            ch=fseek(fp,n,1);
        printf("\t");
    }
    printf("\n");
    fclose(fp);
}