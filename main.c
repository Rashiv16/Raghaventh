#include<stdio.h>
int main()
{
  int a[5][5],b[5][5],m[5][5];
  int i,j,r,c,t,k;
  printf("\nEnter No of Rows : ");
  scanf("%d",&r);
  printf("\nEnter No of Columns : ");
  scanf("%d",&c);
  printf("\nEnter A Matrix : ");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        printf("\t%d",a[i][j]);
    }
    printf("\n");
  }
  printf("\nEnter B Matrix : ");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       printf("\t%d",b[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      t=0;
      for(k=0;k<c;k++)
      {
         t+=(a[i][k]*b[k][j]);
      }
      m[i][j]=t;
    }
  }
  printf("\nResult Matrix : \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       printf("\t%d",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}