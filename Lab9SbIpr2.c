#include <stdio.h>

int main()
{
    int i;
    int first_val;
    int last_val;
    int mid_val;
    int n;
    int value_to_search;
    int array[100];

   printf("Enter the number of elements: ");
   scanf("%d",&n);

   printf("\nEnter %d integers:\n", n);

   for (i = 0; i <= n-1; i++)
      scanf("%d",&array[i]);

   printf("Enter value to find:\n");
   scanf("%d", &value_to_search);

   first_val = 0;
   last_val = n - 1;
   mid_val = (first_val+last_val)/2;

   while (first_val <= last_val) {
      if (array[mid_val] < value_to_search)
         first_val = mid_val + 1;
      else if (array[mid_val] == value_to_search) {
         printf("The element %d has been found at location %d.\n", value_to_search, mid_val+1);
         break;
      }
      else
         last_val = mid_val - 1;

      mid_val = (first_val + last_val)/2;
   }
   if (first_val > last_val)
      printf("The value is not in the list!\n", value_to_search);

   return 0;
}
