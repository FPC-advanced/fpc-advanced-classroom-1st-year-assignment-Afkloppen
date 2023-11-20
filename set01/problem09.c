#include<stdio.h>
#include<math.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float n, sqrroot;
    
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
}
float input()
{
   float n;
    printf("The squareroot is:\n");
    scanf("%f", &n);
    return n;
}
float square_root(float n)
{
    float sqrroot;
    sqrroot=sqrt(n);
    return sqrroot;
}
void output(float n, float sqrroot)
{
    printf("The sqr of %f is %f\n", n, sqrroot);
}