#include <stdio.h>
void swap1(int *p,int *q);
int main()
{
    int a,b;
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("Enter the value b: ");
    scanf("%d",&b);
    swap1(&a,&b);
    printf("a value:%d\n",a);
    printf("b value:%d",b);
    return 0;

}
void swap1(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}