#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int rand(void);

void insertionSort(int array[], int size) {
    for(int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        while(key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

int main()
{
    
    FILE *fptr;
    fptr = (fopen("insertion.txt", "w"));

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
        insertionSort(arr, i*100);
        clock_t end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
        printf("%f\n", time_spent);
    }
    fclose(fptr);
    
    return 0;
}
