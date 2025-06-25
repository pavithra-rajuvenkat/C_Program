#include <stdio.h>
int main()
{
    int num;
    printf("enter the num value:\n");
    scanf("%d",&num);
    (num&(num-1)==0)?(printf("The %d number is pow of two ",num)):(printf("The %d number is not a pow of two ",num));
}