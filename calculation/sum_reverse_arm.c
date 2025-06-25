#include <stdio.h>
int main()
{
    int num,sum=0,re,arm=0,temp,r,rev;
    printf("enter the num value:\n");
    scanf("%d",&num);
    while(num)
    {
        re=(num%10);
        sum=re+sum;
        num=num/10;

    }
    printf("The sum of number is:%d\n",sum);
    

    printf("enter the num value:\n");
    scanf("%d",&num);
    while(num)
    {
        rev=(num%10);
        printf("%d",rev);
        num=num/10;

    }
    printf("\nenter the num value:\n");
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        r=(num%10);
        arm=arm+(r*r*r);
        num=num/10;
    }
    (arm==temp)? (printf("\nit is an arm strong number %d",temp)):(printf("\nit is not an arm strong number %d",temp));
    

}