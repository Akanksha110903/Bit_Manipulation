//check if a bit is set at a given position in a number
#include <stdio.h>
#define is_bit_set(num,pos)  ((num>>pos) & 1)

int main() {
    int num,pos;
    printf("Enter the number and position to check: ");
    scanf("%d %d",&num,&pos);
    if(is_bit_set(num,pos))
        printf("Bit is set at position %d\n",pos);
    else
        printf("Bit is not set at position %d\n",pos);

    return 0;
}