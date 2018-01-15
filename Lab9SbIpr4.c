#include<stdio.h>
int array[100];
int i;
int j;
int n;
int aux;

int main()
{
    printf("How many numbers are in the array?\n");
    scanf("%d",&n);

    printf("Enter %d integers:\n",n);
    for(i=0;i<=n-1;i++)
    {
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
    }

    for(i=0;i<=n-2;i++)
    for(j=i+1;j<=n-1;j++)
    {
        if(array[i]>array[j])
        {
            aux=array[i];
            array[i]=array[j];
            array[j]=aux;
        }
    }

    printf("The sorted array is:\n");
    for(i=0;i<=n-1;i++)
        printf("array[%d]=%d\n",i,array[i]);
}
