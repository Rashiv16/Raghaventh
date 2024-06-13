#include<stdio.h>
#include<stdlib.h>
void main()
{
    char buf[50];
    int ch;
    FILE *fp1, *fp2;
    fp1=fopen("source.txt","r");
    fp2=fopen("destination.txt","w");
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    fp2=fopen("destination.txt","r");
    fgets(buf,50,fp2);
    printf("%s\n",buf);
}