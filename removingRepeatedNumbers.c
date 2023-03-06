#include<stdio.h>
int main()
{
    int arr[]={1,2,3,2,4,5,3,1},i,j,Asize=8,temp;
    for(i=0;i<Asize;i++)
    {
        for(j=i+1;j<Asize;j++)
        {
            if(arr[j]==arr[i])
            {
                temp=arr[j];
                arr[j]=arr[Asize-1];
                arr[Asize-1]=temp;
                Asize=Asize-1;
            }
        }
    }
    for(i=0;i<Asize;i++)
    {
        printf("%d ",arr[i]);
    }
}

