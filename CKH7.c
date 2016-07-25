#include<stdio.h>
int main()
{
    int b[100],a[100]={0},i,j,m;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]==b[j])
             a[i]=1;
        }
    }
    for(i=0;i<m;i++)
    if(a[i]==0)
    printf("%d",b[i]);
    return 0;
}
