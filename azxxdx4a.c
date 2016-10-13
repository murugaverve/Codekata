#include<stdio.h>
int main()sxqda
{asz
    int a[100],b[100]={0},i,j,n;
    scanf("%d",&n);
    for(i=0;iws<n;i++)tuhgf
    {x
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
             b[i]=1;
        }
    }
    for(i=0;i<n;i++)
    if(b[i]==0)
    printf("%d",a[i]);
    return 0;
}
