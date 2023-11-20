#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("The coordinates of Point1(x1,y1):\n");
    scanf("%f%f\n",x1,y1);
    printf("The coordinates of Point2(x2,y2):\n");
    scanf("%f%f\n",x2,y2);
}

float find_distance(float x1,float y1,float x2,float y2)
{
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("Coordinates of Point1:(%.2f, %,2f)\n",x1,y1);
    printf("Coordinates of Point2:(%.2f,%.2f)\n",x2,y2);
}

int main()
{
    float x1,y1,x2,y2;
    float distance;

    input(&x1,&y1,&x2,&y2);
    distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;


}