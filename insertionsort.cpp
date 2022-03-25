//Hecho por Kenneth Palacios Molina. 2020035407

#include <iostream>
#include <ctime>
using namespace std;

void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];//take value
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;   //insert in right place
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
    int second_array[] = {55,59,82,87,42,31,4,7,24,25,3,63,99,1,7,11,21,18,19,44,45,56,15,45,22,102,44,2,53,67,95,15,114,35,24,3,1};
    int n = sizeof(array)/sizeof(array[0]);
    int second_n = sizeof(second_array)/sizeof(second_array[0]);
    cout << "Array: " << endl;
    displayArray(array,n);

    clock_t t;
    t = clock();
    insertionSort(array,n);
    t = clock();

    cout << "Sorted array with insertion sort algorithm." << endl;
    cout << "Insertion sort of the array took: " << ((double)t)/CLOCKS_PER_SEC << " seconds to execute. " << endl;

    displayArray(array,n);

    cout << endl << " -----Second example----- " << endl;

    displayArray(second_array,second_n);
    clock_t t2;
    t2 = clock();
    insertionSort(second_array,second_n);
    t2 = clock();
    cout << "Second sorted array with insertion sort algorithm." << endl;
    cout << "Insertion sort of the array took: " << ((double)t2)/CLOCKS_PER_SEC << " seconds to execute." << endl;

    displayArray(second_array,second_n);
}