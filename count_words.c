#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
    char ch;
    int w_count=1,l_count=1,c_count=0;
    FILE *fp;
    fp=fopen(argv[1],"w");
    fputs("Hello World\nWelcome to India and enjoy the day\nIndia is the good country and it is very famous for the tourists places",fp);
    fclose(fp);
    fp=fopen(argv[1],"r");
    while((ch=fgetc(fp))!=EOF)
    {
        c_count++;
        if(ch==' '||ch==','||ch==':'||ch==';'||ch=='?'||ch=='-'||ch=='\t')
            w_count++;
        else if(ch=='\n')
            l_count++;
    }
    printf("Character count is %d\n",c_count);
    printf("Word count is %d\n",w_count);
    printf("Line count is %d\n",l_count);
    fclose(fp);
}