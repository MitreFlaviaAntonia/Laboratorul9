#include <stdio.h>

void quick_sort( int arr[], int k, int n )
{
   int j;

   if( k < n )
   {
        j = partition( arr, k, n);
        quick_sort( arr, k, j-1);
        quick_sort( arr, j+1, n);
   }

}

int partition( int arr[], int k, int n )
{
    int pivot;
    int i;
    int j;
    int aux;
    int x=1;

    pivot = arr[k];
    i = k;
    j = n+1;


    while(x==1)
    {
        do
            i=i+1;
        while( arr[i] <= pivot && i <= n );

        do
            j=j-1;
        while( arr[j] > pivot );

        if( i >= j )
            break;

        aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
   }

    aux = arr[k];
    arr[k] = arr[j];
    arr[j] = aux;
    return j;
}

void main()
{
    int arr[100];
    int n;
    int i;

    printf("Give the length of the array: ");
	scanf("%d",&n);

    for(i = 0; i < n; i++)
		{
		printf("\narr[%d]=", i);
        scanf("%d", &arr[i]);
		}

	printf("\n\nThe unsorted array is:  ");
	for(i = 0; i < n; i++)
		printf(" %d ", arr[i]);


	quick_sort( arr, 0, n-1 );


	printf("\n\nThe sorted array is:  ");
	for(i = 0; i < n; i++)
		printf(" %d ", arr[i]);

    return 0;
}

