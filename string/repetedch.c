#include <stdio.h>

int main() {

char str[50];
int i,j,count=0,k;

printf("enter the string\n");
scanf("%s",str);

for(i=0;str[i]!='\0';i++);
printf("string length:%d\n",i);

for(i=0;str[i]!='\0';i++)
{
    for(j=i+1;str[j]!='\0';j++)
    {
        if(str[j]==str[i])
        {
            count++;
            for(k=j;str[k]!='\0';k++)
            {
            str[k]=str[k+1];
            }
       
        }
    }
}
printf("repeted char count=%d\n",count);
for(i=0;str[i]!='\0';i++)
printf("%c",str[i]);
    return 0;
}