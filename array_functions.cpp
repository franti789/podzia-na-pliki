//
// Created by asgma on 19.06.2024.
//
#include "array_functions.h"
#include <cstdio>

void displayArray(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        printf("*(array + %d) = %d\n", i, *(array + i));
    }
}

float calcAverage(int *array, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *(array + i);
    }
    return static_cast<float>(sum) / size;
}

int calcMin(int *array, int size) {
    int min = *array;
    for (int i = 1; i < size; ++i) {
        if (*(array + i) < min)
            min = *(array + i);
    }
    return min;
}

int calcMax(int *array, int size) {
    int max = *array;
    for (int i = 1; i < size; ++i) {
        if (*(array + i) > max)
            max = *(array + i);
    }
    return max;
}

void fetchData(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        printf("*(array + %d) = ", i);
        scanf("%d", (array + i));
    }
}

void editValue(int *array, int size) {
    int index, newValue;
    printf("Podaj indeks elementu, ktory chcesz edytowac: ");
    scanf("%d", &index);
    if (index >= 0 && index < size) {
        printf("Podaj nowa wartosc: ");
        scanf("%d", &newValue);
        array[index] = newValue;
        printf("Zmieniono wartosc elementu o indeksie %d na %d\n", index, newValue);
    } else {
        printf("Niepoprawny indeks!\n");
    }
}