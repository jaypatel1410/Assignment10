#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
    int SUM,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    SUM=fact(N);
    printf("The factorial of %d is %d",N,SUM);
    getch();
    return 0;
}
int fact(int n)
{
    int sum=1,i;
    for(i=1;i<=n;i++)
    sum=sum*i;
    return sum;
}