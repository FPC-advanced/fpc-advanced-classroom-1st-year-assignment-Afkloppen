#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);


int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}


int check_scalene(int a, int b, int c) {
    int isscalene;
    if (a != b && a != c && b != c && b !=a && c !=a && c !=b) {
        isscalene=1;
        return isscalene;
    } else {
        isscalene=0; 
        return isscalene;
    }
    return isscalene;
}


void output(int a, int b, int c, int isscalene) {
    printf("Side 1: %d\n", a);
    printf("Side 2: %d\n", b);
    printf("Side 3: %d\n", c);

    if (isscalene) {
        printf("The triangle is scalene.\n");
    } else {
        printf("The triangle is not scalene.\n");
    }
}

int main() {
    int a,b,c,isscalene;

    
    a = input_side();
    b = input_side();
    c = input_side();

    
     isscalene = check_scalene(a,b,c);

    
    output(a,b,c,isscalene);
    return 0;
}
