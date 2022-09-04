#include<stdio.h>
#include<conio.h>
void naturalnum(int);
int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    naturalnum(N);
    getch();
    return 0;
}
void naturalnum(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d ",2*i-1);
}