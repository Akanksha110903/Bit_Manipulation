//check if a number is a power of 2
#include <stdio.h>

int countSetBit(int num)
{
    int count = 0;

    while(num)
    {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

//approach 1: using count of set bits
int is_power_of_two(int num)
{
    if(num <= 0)
        return 0;

    int count = countSetBit(num);// Count the number of set bits in the number

    if(count == 1)// A number is a power of 2 if it has exactly one set bit
        return 1;
    else
        return 0;
}

//approach 2: using bitwise operation
int is_power_of_twoo(int num)
{
    if(num <= 0)
        return 0;
    return (num & (num - 1)) == 0;// A number is a power of 2 if it has exactly one set bit, which means num & (num - 1) should be 0 example: 4 (100) & 3 (011) = 0, 5 (101) & 4 (100) = 4 (not a power of 2)
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(is_power_of_two(num))
        printf("%d is a power of 2\n",num);
    else
        printf("%d is not a power of 2\n",num);


    if(is_power_of_twoo(num))
        printf("%d is a power of 2\n",num);
    else
        printf("%d is not a power of 2\n",num);

    return 0;
}