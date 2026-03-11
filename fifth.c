// Count the number of set bits in a given number
#include <stdio.h>

int countSetBits(int num){
    int count = 0;
    while(num){ 
    
    count += num & 1;
    num>>=1;
    }
    return count;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int setBitsCount=countSetBits(num);
    printf("Number of set bits in %d is %d\n",num,setBitsCount);
    return 0;
}