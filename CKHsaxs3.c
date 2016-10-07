#include<stdio.h>
int main()xss
{
 int a[100],n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)s
 {as
 scanf("%d",&a[i]);
 if(a[i]==i)
 printf("%d",i);
 }
 return 0;
}
