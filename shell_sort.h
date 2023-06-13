#include <stdio.h>

void shellSort(int arr[], int size) {
    int gap, i, j, temp;

    for (gap = size / 2; gap > 0; gap /= 2) {  // начальный шаг
        for (i = gap; i < size; i++) {  // сортировка вставками с шагом gap
            temp = arr[i];
            j = i;
            while (j >= gap && arr[j - gap] > temp) { // сдвигаем элементы массива влево до тех пор, пока не найдем правильное место для вставки текущего элемента
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

//notes for myself
/*
 Algorithm:
Step 1 − Start
Step 2 − Initialize the value of gap size. Example: h
Step 3 − Divide the list into smaller sub-part. Each must have equal intervals to h
Step 4 − Sort these sub-lists using insertion sort
Step 5 – Repeat this step 2 until the list is sorted.
Step 6 – Print a sorted list.
Step 7 – Stop.
 */