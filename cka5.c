#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&ba,&c);
    printf("%d", a > b ? (a > c ? a : c) : (b > c ? b : c) );
    return 0;
}
