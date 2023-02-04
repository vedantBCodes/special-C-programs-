#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],arr3[3][3];
    int i,j;
    printf("Enter 9 array elements in 1st matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter 9 array elements in 2nd matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
     printf("Entered 1st matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]);
        }
            printf("\n");
    }
     printf("Entered 2nd matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr2[i][j]);
        }
            printf("\n");
    }
    printf("Sum of entered two matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr3[i][j]);
        }
            printf("\n");
    }
}
