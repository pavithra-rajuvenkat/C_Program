#include <stdio.h>
int main()
{
    int num,bp,set,clear,set_r_clear,complement;
    printf("enter the num value:\n");
    scanf("%d",&num);
    printf("enter the bit position:\n");
    scanf("%d",&bp);
    set = num|(1<<bp);
    clear = num&~(1<<bp);
    set_r_clear=num&(1<<bp);
    complement=num^(1<<bp);
    printf("set:%d\n",set);
    printf("clear:%d\n",clear);
    printf("set_r_clear:%d\n",set_r_clear);
    printf("complement:%d\n",complement);
    return 0;

}