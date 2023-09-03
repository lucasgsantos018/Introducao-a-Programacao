#include <stdio.h>

int main()
{
    int num;
    int *ptr , *ptr2 ;
    num = 20;
    ptr = &num ;
    ptr2 = ptr ;
    *ptr = 9;
    *ptr2 = 3;
    printf("\n%d\n\n", num);
    return 0;

}