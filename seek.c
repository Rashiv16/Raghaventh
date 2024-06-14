#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    int i,count,n;
    fp=fopen("word.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
        count++;
        if(count%10==0)
            ch=fseek(fp,10,1);
        printf("\t");
    }
    printf("\n");
    fclose(fp);
}