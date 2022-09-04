#include<stdio.h>
#include<conio.h>
float area(float);
int main()
{
    float a,r;
    printf("Enter radius\n");
    scanf("%f",&r);
    a=area(r);
    printf("Area of the Circle is %f",a);
    getch();
    return 0;
}
float area(float radius)
{
    float area;
    area=3.14*radius*radius;
    return area;
}