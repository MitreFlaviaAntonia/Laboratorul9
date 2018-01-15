#include <stdio.h>
void shellsort(int v[], int number)
{
    int i, j, k, aux;
    for (i = number / 2; i > 0; i = i / 2)
    {
        for (j = i; j < number; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (v[k+i] >= v[k])
                    break;
                else
                {
                    aux = v[k];
                    v[k] = v[k+i];
                    v[k+i] = aux;
                }
            }
        }
    }
}
int main()
{
    int v[30];
    int k,  number;
    printf("Give the number of elements: ");
    scanf("%d", &number);
    printf("\nGive the elements: ");

    for (k =  0 ; k < number; k++)
    {
        scanf("%d", &v[k]);
    }

    shellsort(v, number);
    printf("\nThe array after sorting is: ");

    for (k = 0; k < number; k++)
        printf("%d ", v[k]);

    return 0;
}
