#include <stdio.h>

int main() {

char ch, str[50];
int i,j,count=0,k;
printf("enter the char\n");
scanf(" %c",&ch);
printf("enter the string\n");
scanf("%s",str);

for(i=0;str[i]!='\0';i++);
printf("%d\n",i);

for(j=0;j<i;j++)
{
    if(str[j]==ch)
    {
        count++;
        for(k=j;str[k]!='\0';k++)
        {
        str[k]=str[k+1];
        }
       
    }
}
printf("count=%d\n",count);
for(i=0;str[i]!='\0';i++)
printf("%c",str[i]);
    return 0;
}