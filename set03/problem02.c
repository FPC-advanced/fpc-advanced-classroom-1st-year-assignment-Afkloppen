#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Coordiantes of Point1(x1,y2)\n");
    scanf("%f%f\n",x1,y1);
    printf("Coordinates of Point2(x2,y2)\n");
    scanf("%f%f\n",x2,y2);
    printf("Coordinates of point3(x3,y3)\n");
    scanf("%f%f\n",x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
    if((x1==x2 && y1==y2) || (x1==x3 && y1==y3) || (x2==x3 && y2==y3))
    {
        return 0;
    }
    return 1;
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result)
{
    printf("Coordinates of Point1(%.2f,%.2f)\n",x1,y1);
    printf("Coordinate of Point2(%.2f,%.2f)\n",x2,y2);
    printf("Coordinate of Point3(%.2f, %.2f)\n",x3,y3);
    
    if (result)
    {
        printf("The given points form a triangle.");

    }
    else
    {
        printf("The given points do not form a triangle.");

    }

}

int main()
{
    int x1,y1,x2,y2,x3,y3;
    int result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}