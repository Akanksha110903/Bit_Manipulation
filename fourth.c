//toggle a bit at a given position in a number
#include <stdio.h>
#define toggle_bit(num,pos) ((num) ^= (1U<< (pos)))

int main(){
    int num,pos;
    printf("Enter the number and position to toggle: ");
    scanf("%d %d",&num,&pos);
    num=toggle_bit(num,pos);
    printf("Number after toggling bit at position %d is %d\n",pos,num);
    return 0;
}