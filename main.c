#include <stdio.h>
#include <stdlib.h>
#include "shell_sort.h"

char* readString() {
    int capacity = 1;  // начальная емкость буфера
    int size = 0;     // текущий размер строки
    char* buffer = (char*)malloc(capacity * sizeof(char));  // выделение памяти

    if (buffer == NULL) {
        printf("Error.\n");
        return NULL;
    }

    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (size == capacity) { // если достигнута текущая емкость, увеличиваем
            capacity *= 2;
            char* temp = (char*)realloc(buffer, capacity * sizeof(char));
            if (temp == NULL) {
                printf("Error.\n");
                free(buffer);
                return NULL;
            }
            buffer = temp;
        }

        buffer[size++] = ch;  // добавляем символ
    }

    buffer[size] = '\0';  // Добавляем символ конца строки

    return buffer;
}

int main() {
 /*   int size;
    printf("Input the size and elements of the array: \n");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    shellSort(arr, size);

    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); */

//------------------------------------------------------------------//

    printf("Input the string: \n");
    char* str = readString();

    if (str != NULL) {
        printf("String: %s\n", str);
        free(str);  // освобождаем память
    }

    return 0;
}

//notes for myself
/*malloc (memory allocation) - это функция стандартной библиотеки языка C, которая используется для выделения динамической памяти во время выполнения программы.
int* ptr = (int*)malloc(5 * sizeof(int));
В данном примере выделяется память для массива из 5 элементов типа int.
Выражение 5 * sizeof(int) вычисляет общий размер памяти, необходимый для хранения 5 элементов типа int.
Функция malloc возвращает указатель на начало выделенной памяти, которое приводится к типу int* и присваивается переменной ptr.
Важно помнить, что после использования памяти, выделенной с помощью malloc, ее необходимо освободить с помощью функции free, чтобы избежать утечек памяти.
*/

