#include<stdio.h>
#include<conio.h>
main()//Program to calculate the HCF(Highest Common Factor) of two numbers
{
    int num1,num2,arr1[10],arr2[10],arr3[10],x=0,y=0,z=0,i,j,max;
    printf("Enter the two numbers:");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<=num1;i++)
    {
        if(num1%i==0)
        {
            arr1[x]=i;
            x++;
        }
    }
    for(i=1;i<=num2;i++)
    {
        if(num2%i==0)
        {
            arr2[y]=i;
            y++;
        }
    }
    printf("Factors of %d are:",num1);
    for(i=0;i<x;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
     printf("Factors of %d are:",num2);
     for(i=0;i<y;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    for(i=0;i<x;i++)
    {
    for(j=0;j<y;j++)
    {
        if(arr1[i]==arr2[j])
        {
           arr3[z]=arr1[i];
           z++;
        }
    }
    }
    printf("Common factors of %d and %d are:",num1,num2);
    for(i=0;i<z;i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\n");
    max=arr3[0];
    for(i=0;i<z;i++)
    {
        if(arr3[i]>max)
        {
        max=arr3[i];
        }
    }
    printf("HCF of %d and %d is %d",num1,num2,max);
}

