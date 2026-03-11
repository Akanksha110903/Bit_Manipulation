//set a bit at a given position in a number
#include <stdio.h>
#define set_bit(num,pos) ((num) |= (1U<<(pos)))

int main(){
        int num,pos;
    printf("Enter the number and position to set: ");
    scanf("%d %d",&num,&pos);
    set_bit(num,pos);
    printf("Number after setting bit at position %d is %d\n",pos,num);
    return 0;
}