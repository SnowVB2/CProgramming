#include <iostream>
void printArr(const int* arr, int size);
void doubleArr(int* arr, int size);

int* doubleArrNew(const int* arr, int size);

const int SIZE = 5;

int main(void) {
    int arr[SIZE] = {1,2,3,4,5};
    printArr(arr, SIZE);

    doubleArr(arr, SIZE);
    printArr(arr, SIZE);

    int* new_arr = doubleArrNew(arr, SIZE);
    printArr(new_arr, SIZE);

    for (int i = 0; i < 9999999; i++) {
        std::cout << i << std::endl;
        double* d_arr = new double[99999999];

        //deallocate memory
        delete [] d_arr;

        //every new should match with a delete to prevent memory leaks
    }

    return 0;
}

void printArr(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void doubleArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int* doubleArrNew(const int* arr, int size) {
    // int new_arr[SIZE]; //local array, doesnt work
    int* new_arr = new int[size]; //create array dynamically in the heap

    //heap is a special part of memory that is slower but larger and more dynamic than the stack
    
    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i] * 2;
    }

    return new_arr;
}