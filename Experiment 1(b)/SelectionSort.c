#include<stdio.h>
#include<time.h>
int rand(void);

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    swap(&array[min_idx], &array[step]);
  }
}

int main()
{
    
    FILE *fptr;
    fptr = (fopen("selection.txt", "w"));
    
    for(int i = 1; i <= 1000; i++)
    {
        int arr[i*100];
        for(int j = 0; j < (i*100); j++)
        {
            int num = (rand() % (i*100)) + 1;
            arr[i] = num;
            fprintf(fptr,"%d \n", num);
        }
        double time_spent = 0.0;
        clock_t begin = clock();
        selectionSort(arr, i*100);
        clock_t end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
        printf("%f\n", time_spent);
    }
    fclose(fptr);
    
    return 0;
}
