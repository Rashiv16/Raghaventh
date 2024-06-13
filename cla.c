#include<stdio.h>
#include<stdlib.h>
void main(int argc, char*argv[])
{
    char ch,buf[50];
    FILE *fp1, *fp2;
    fp1=fopen(argv[1],"w");
    fputs("Hello World!! Welcome",fp1);
    fclose(fp1);
    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"w");
    while((ch=fgetc(fp1))!=EOF)
        fputc(ch,fp2);
    fclose(fp1);
    fclose(fp2);
    fp2=fopen(argv[2],"r");
    fgets(buf,50,fp2);
    printf("%s\n",buf);
    fclose(fp2);
}