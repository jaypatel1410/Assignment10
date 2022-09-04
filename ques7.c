#include<stdio.h>
#include<conio.h>
int fact(int);
double combination(int,int);
int main()
{
    int x,y;
    double nCr;
    printf("Enter n and r :\n");
    scanf("%d%d",&x,&y);
    nCr=combination(x,y);
    printf("The combination is %lf",nCr);
    getch();
    return 0;
}
int fact(int a)
{
    float fact=1,i;
    for(i=1;i<=a;i++)
    fact=fact*i;
    return fact;
}

double combination(int n,int r)
{
    double nCr;
    nCr=fact(n)/(fact(r)*fact(n-r));
    return nCr;
}