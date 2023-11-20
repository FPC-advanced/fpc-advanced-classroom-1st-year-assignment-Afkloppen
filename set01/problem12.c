#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
void input_n_complex(int n, Complex c[n]);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main()
{
    int n,c[n],result;
    n=get_n;
    input_n_complex(n,c);
    add_n_complex(n,c);
    void output(n,c,result);
}
void input_n_complex(int n, Complex c[n])
{
    int n;
    
    int i;
    for(i=0;i<n;i++){
    printf("Enter the value\n", n);
    scanf("%d", n);
}
}
Complex add_n_complex(int n, Complex c[n])
{
 int i=0,sum;
   for(i=1 ; i<=n ; i++)
   {
    {
    sum=sum+i;
   }
   
   }
}
void output(int n, Complex c[n], Complex result)
{
    printf("sum is %d\n",result);
}