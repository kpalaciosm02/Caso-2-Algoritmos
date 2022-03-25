#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
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
    return (i + 1);
}

int partition_r(int arr[], int low, int high) { 
    srand(time(NULL)); 
    int random = low + rand() % (high - low); 
   
    swap(arr[random], arr[high]); 
  
    return partition(arr, low, high); 
} 

void quicksort(int array[], int low, int high){
    if (low < high){
        int pivot = partition(array, low, high);

        quicksort(array, low, pivot -1);
        quicksort(array, pivot + 1, high);
    }
}

void quickSortR(int array[], int low, int high){
    if (low < high){
        int pivot = partition_r(array, low, high);

        quickSortR(array, low, pivot - 1);
        quickSortR(array, pivot + 1, high);
    }
}

void displayArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " -> ";
    }
    cout << endl;
}

int main(){
    int array[] = {1,2,34,4,3,967,7468,3,3,7,343,3,7,74,4,56,67,5,4,3,235,6,7,65,56,7,58,7,4,34,7,32,5,7,75,67,67,67,86,786,786,786,7,57,57,5,78,57,41,54,52,7,4,27,537,57,8};
    int n = sizeof(array)/sizeof(array[0]);
    cout << "Array: " << endl;
    displayArray(array,n);
    
    clock_t t;
    t = clock();
    quicksort(array, 0 , n - 1);
    t = clock();

    cout << "Quicksorted array: " << endl;
    cout << "Quicksort of an array took: " << ((double)t)/CLOCKS_PER_SEC << " seconds to execute." << endl;
    displayArray(array,n);

    int array2[] = {1,2,34,4,3,967,7468,3,3,7,343,3,7,74,4,56,67,5,4,3,235,6,7,65,56,7,58,7,4,34,7,32,5,7,75,67,67,67,86,786,786,786,7,57,57,5,78,57,41,54,52,7,4,27,537,57,8};
    clock_t t2;
    t2 = clock();
    quickSortR(array2,0,n - 1);
    t2 = clock();

    cout << "Quicksorted array with random pivot" << endl;
    cout << "Quicksort of an array with random pivot took: " << ((double)t2)/CLOCKS_PER_SEC << " seconds to execute." << endl;
    displayArray(array,n);
    return 0;
}