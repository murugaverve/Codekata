#include <stdio.h>
#include<string.h>
int main()
{
    
int m[256];
char a[20];
memset(m,0,sizeof(m));
    scanf("%s",a);
    int i,n=strlen(a);
    for(i=0;i<n;i++){
        if(m[a[i]]==0){
            m[a[i]]=1;
        if(a[i]=='a'){
            a[i]='z';
        }
        else if(a[i]=='A')
           a[i]='Z';
        else
          a[i]=a[i]-1;
          m[a[i]]=1;
        }
    }
    printf("%s",a);
    return 0;
}
