#include <stdio.h>
int test(int array[], int size)
{
 int i;
 for( i=0; i<size; i++)
  {
      printf("%d, ", array[i]);
  }
      printf("\n");
}

int main()
{

    int array_size;
    int array1[] = {1, 2, 3, 5, 7, 0, 9, 11};
    array_size = sizeof(array1)/sizeof(array1[0]);
    printf("Elements in original array are: ");
    test(array1, array_size);
    int position = 0;
    for(int i = 0; i < array_size; i++)
    {
        if (array1[i] == 0)
        {
            array1[i] = array1[position];
            array1[position++] = 0;

        }
    }
    array_size = sizeof(array1)/sizeof(array1[0]);
    printf("\nElements in new array are: ");
    test(array1, array_size);

}
