#include<stdio.h>
int main()
{
 int t1,sum,n,m,i,j,t;
 scanf("%d %d",&n,&m);
 for(i=n;i<=m;i++)
 {
  sum=0;
  t=i;
  while(t!=0)
  {
   t1=t%10;
   sum=sum+t1*t1*t1;
   t=t/10;
  }
  if(sum==i)
  printf("%d\n",i);
 }
return 0;
}
