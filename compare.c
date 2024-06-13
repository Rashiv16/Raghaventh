#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    int c1=0,c2=0,flag=0;
    char ch,ch1,ch2;
    fp1=fopen(argv[1],"w");
    fputs("raghaventh Aravinth",fp1);
    fclose(fp1);
    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"r");
    while((ch=fgetc(fp1))!=EOF)
    {
        c1++;
        if(ch==' ')
            c1--;
    }
    while((ch=fgetc(fp2))!=EOF)
    {
        c2++;
        if(ch==' ')
            c2--;
    }
    if(c1==c2)
    {
        ch1=fgetc(fp1);
        ch2=fgetc(fp2);
        while((ch1!=EOF)&&(ch2!=EOF))
        {
            if(ch1!=ch2)
            {
                flag=1;
                break;
            }
            ch1=fgetc(fp1);
            ch2=fgetc(fp2);
        }
        if(flag)
            printf("Both are not same\n");
        else
            printf("Both are same\n");
    }
    else {
        printf("Not valid\n");
    }
    fclose(fp1);
    fclose(fp2);
}