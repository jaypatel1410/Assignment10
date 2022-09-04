#include<stdio.h>
#include<conio.h>
float SI(float,float,float);
int main()
{
    float SimpleInterest,P,R,N;
    printf("Enter the values of P,R and N resp.\n");
    scanf("%f%f%f",&P,&R,&N);
    SimpleInterest=SI(P,R,N);
    printf("The Simple Interest is %f",SimpleInterest);
    getch();
    return 0;
}
float SI(float p,float r,float n)
{
    float si;
    si=p*r*n/100;
    return si;
}