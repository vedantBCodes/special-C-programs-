#include<stdio.h>
tribonacciSeries(int num)
{
    int i,a,b,c,d;
    a=0;
    b=1;
    c=1;
    printf("First %d numbers of tribonacci series are:",num);
    printf("%d %d %d ",a,b,c);
    for(i=2;i<num-1;i++)
    {
        d=a+b+c;
        printf("%d ",d);
        a=b;
        b=c;
        c=d;
    }
}
int main()
{
    int no;
    printf("Enter a number:");
    scanf("%d",&no);
    tribonacciSeries(no);
}

