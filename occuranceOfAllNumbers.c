#include<stdio.h>
int main( )
{
    int arr1[20];
    int i,j,k,num;
    printf("How many numbers you want to take:");
    scanf("%d",&num);
    printf("Enter %d array elements:",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<num;i++)
  {
        int cnt=0;
        int x=0;
        for(j=i-1;j>=0;j--)
        {
            if(arr1[i]!=arr1[j])
            {
            x++;
            }
        }
        if(x==i)
        {
        for(k=0;k<num;k++)
        {
            if(arr1[i]==arr1[k])
            {
                cnt++;
            }
        }
        printf("%d occurs %d times\n",arr1[i],cnt);
        }
    }
}

