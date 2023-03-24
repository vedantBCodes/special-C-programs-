#include<stdio.h>
fibonaccySeries(int num)
{
    int i,a,b,c;
    a=0;
    b=1;
    printf("First %d numbers of fibonacci series are:",num);
    printf("%d %d ",a,b);
    for(i=2;i<num;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
int main()
{
    int no;
    printf("Enter a number:");
    scanf("%d",&no);
    fibonaccySeries(no);
}
