#include<stdio.h>
#include<conio.h>
int CD(int,int);
int main()
{
    int m,n,result,result2;
    printf("Enter a number and Digit\n");
    scanf("%d%d",&m,&n);
    result=CD(m,n);
    if(result==1)
    printf("%d is present",n);
    else
    printf("%d is not present",n);
    getch();
    return 0;
}
int CD(int x,int y)
{
    int a;
    while(x!=0)
    {
        a=x%10;
        if(a==y)
        {
            return 1;
        }
        else
        {
            x=x/10;
        }
    }
    return 0;
}
