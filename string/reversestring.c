#include <stdio.h>

int main() {
    
char str[50];
int i,j;
printf("enter the string\n");
scanf("%s",str);
for(i=0;str[i];i++);
printf("%d\n",i);
for(j=i-1;j>=0;j--)
printf("%c",str[j]);
    return 0;
}