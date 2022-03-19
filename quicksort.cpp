#include <iostream>
using namespace std;

void swap(int * a, int * b){ //swaps elements in an array
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high){//partition of the array using last element as pivot
    int pivot = array[high];
    int i = low - 1;
    for (int j = low; j <= high-1; j++){
        if (array[j] <= pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i 
    + 1);
}