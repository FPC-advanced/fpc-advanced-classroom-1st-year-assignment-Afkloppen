#include<stdio.h>
int input();
int find_sum(int n, int sum);
void output(int sum);
int main()
{
    int i=0,sum=0,n;
    n=input();
    sum=find_sum(n,sum);
    output(sum);
    return 0;
}
int input()
{

int a;
    printf("Enter the value\n");
    scanf("%d", &a);
    return a;
}
int find_sum(int n, int sum)
{ int i=0;
   for(i=1 ; i<=n ; i++)
   {
    sum=sum+i;
   }
   return sum;

}
void output(int sum)
{
printf("sum is %d\n", sum);
    
}