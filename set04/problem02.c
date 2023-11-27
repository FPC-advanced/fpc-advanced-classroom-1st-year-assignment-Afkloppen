#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;

Fraction findSmallestFraction(Fraction fraction1, Fraction fraction2){
double value1=(double)fraction1.num/fraction1.den;
double value2=(double)fraction2.num/fraction2.den;
 
 if(value1>value2){
    return fraction1;
 }
 else{
    return fraction2;
 }
}

int main()
{
    Fraction fraction1, fraction2, fraction3, smallestFraction;
    printf("Enter the first fraction(num and den):\n");
    scanf("%d%d",&fraction1.num,&fraction1.den);
    printf("Enter the second fraction(num and den):\n");
    scanf("%d%d",&fraction2.num,&fraction2.den);
    printf("Enter the third fraction(num and den):\n");
    scanf("%d%d",&fraction3.num,&fraction3.den);
    smallestFraction=findSmallestFraction(findSmallestFraction(fraction1,fraction2),fraction3);
    printf("The smallest fraction is %d%d",smallestFraction);
}