#include<stdio.h>
#include<conio.h>
void primefactor(int);
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    primefactor(a);
    getch();
    return 0;
}

void primefactor(int x)
{
    int i;
    for(i=2;x>1;i++)
    {
        while(x%i==0)
        {
            printf("%d ",i);
            x=x/i;
        }
    }
}
