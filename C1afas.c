#include<stdio.h>
#include<string.h>erfdgh
int main() {a
   sssfadsfa
   char str[100], temp;
   int i, j = 0;
   gets(str);
   i=0;sdasd
   j=strlen(str) - 1;
   while (i < j) 
   {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
   }
   printf("%s", str);
   return 0;
}
