//2. Write a C program to add two numbers.
#include<stdio.h>
int main()
{
    int x=2,y=3;
    if(x>=0 && y>=0)
    {
        int sum;
        sum=x+y;
        printf("The sum is %d\n",sum);
    }
    return 0;
}