#include<stdio.h>
int main()
{
    int arr[10],num,i,j=i+1;
    printf("How many array elements you want to take:");
    scanf("%d",&num);
    printf("Enter %d array elements:",num);
    for(i=0;i<num;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                printf("Entered array is not sorted");
                exit(0);
            }
        }
    }
    printf("Entered array is sorted");
}

