#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number()
{
    int n;
    printf("Enter the value:\n");
    scanf("%d", &n);
    return n;
}
int is_composite(int n)
{
    int i,result;
    if(n<=1)
    {
        result=0;
        return result;
    }
    for(i=2;i<n;i++)
    {
        if(n % i==0)
        { 
            result=1;
            return result;
        }
        else
        if(n % i != 0)
        {
            result=-1;
            return result;
        }
    }
    return result;
}
void output(int n, int result)
{
    if(result==1)
    {
        printf("%d is composite and result is %d\n",n,result);
    }
    else{
        printf("%d is not composite and the result is %d\n",n,result);
    }
}
int main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}