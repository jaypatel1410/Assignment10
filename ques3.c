#include<stdio.h>
#include<conio.h>
int evenodd(int);
int main()
{
    int num,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    num=evenodd(N);//num=0 i.e number is odd and num=1 i.e number is even
    printf("%d",num);
    getch();
    return 0;
}
int evenodd(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}