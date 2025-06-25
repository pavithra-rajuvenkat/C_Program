#include <stdio.h>
struct swap
{
    int AS_A;
    int AS_B;
};
typedef struct swap str;
str swap(int x, int y)
{
    x= x*y/(y=x);
    str s;
    s.AS_A=x;
    s.AS_B=y;
    return s;
}
int main()
{
    int a,b;
    str result;
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("Enter the value b: ");
    scanf("%d",&b);
    result=swap(a,b);
    printf("The swap value of a is %d\n The swap value of b is %d ",result.AS_A,result.AS_B);
    return 0;
}
