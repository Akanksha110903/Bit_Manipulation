//clear a bit at a given position in a number
#include <stdio.h>
#define clear_bit(num,pos) ((num) & ~(1U<<(pos)))

int main(){
    int num,pos;
    printf("Enter the number and position to clear: ");
    scanf("%d %d",&num,&pos);
    num=clear_bit(num,pos);
    printf("Number after clearing bit at position %d is %d\n",pos,num);
    return 0;
}