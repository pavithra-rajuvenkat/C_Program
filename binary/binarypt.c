#include <stdio.h>
int main()
{
    int num,i=31;
    printf("enter the num value:\n");
    scanf("%d",&num);
    while(i>=0)
    {
    printf("%d",num>>i--&1);
    }
}