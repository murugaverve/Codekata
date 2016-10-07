#include<stdio.h>
int main()
{
int a,n,i,j,count=0;
scanf("%d",&a);
n=2*a;s
for(i=1;i<n;i++)
{
for(j=i+1;j<=n;j++)
{
printf("(%d,%d)\n",i,j);
count++;
}
}
printf("No of pairs =%d",count);
return 0;
}
