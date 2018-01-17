#include<stdio.h>

int v[100];
int v1[50];
int v2[50];
int c[100];

void array_sort(int array[],int begin,int finish)
{
    int i,j,aux;

    for(i=begin;i<=finish-2;i++)
    for(j=i+1;j<=finish-1;j++)
    {
        if(array[i]>array[j])
        {
            aux=array[i];
            array[i]=array[j];
            array[j]=aux;
        }
    }

    printf("The sorted array is:\n");

    for(i=begin;i<=finish-1;i++)
        printf("array[%d]=%d\n",i,array[i]);
}

int main()
{
    int i,j,k;

    int n,p,q,x;
    printf("How many values are in the array?\n");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++)
    {
        printf("\nv[%d]=",i);
        scanf("%d",&v[i]);
    }

    for(i=0;i<=(n/2)-1;i++)
    {
        v1[i]=v[i];
    }

    for(j=(n/2);j<=n-1;j++)
    {
        v2[j]=v[j];
    }

    array_sort(v1,0,(n/2));
    array_sort(v2,(n/2),n);

    p=0;
    i=0;
    j=n/2;

    while(i<=(n/2)-1&&j<=n-1)
    {
        if(v1[i]<=v2[j])
        {
            c[p]=v1[i];
            i++;
        }

        else
        {
            c[p]=v2[j];
            j++;
        }

        p++;
    }

    while(i<=(n/2)-1)

    {
        c[p]=v1[i];
        i++;
        p++;
    }

    while(j<=n-1)
    {
        c[p]=v2[j];
        j++;
        p++;
    }


    for(i=0;i<=p-1;i++)
    {
        printf("\nc[%d]=",i);
        printf("%d",c[i]);
    }

    return 0;
}
