#include<stdio.h>
#include<conio.h>
int fact(int);
double permutation(int,int);
int main()
{
    int x,y;
    double nPr;
    printf("Enter n and r :\n");
    scanf("%d%d",&x,&y);
    nPr=permutation(x,y);
    printf("The permutation is %lf",nPr);
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

double permutation(int n,int r)
{
    double nPr;
    nPr=fact(n)/fact(n-r);
    return nPr;
}