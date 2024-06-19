#include <cstdio>
#include "array_functions.h"

#define SIZE 10

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Wywietl tablice\n");
        printf("2. Oblicz srednia\n");
        printf("3. Znajdz minimum\n");
        printf("4. Znajdz maksimum\n");
        printf("5. Wprowadz dane\n");
        printf("6. Edytuj pojedyncza wartosc\n");
        printf("7. Wyjdz\n");
        printf("Wybierz opcje: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nTablica:\n");
                displayArray(array, SIZE);
                break;
            case 2:
                printf("\nSrednia wynosi: %f\n", calcAverage(array, SIZE));
                break;
            case 3:
                printf("\nMinimum wynosi: %d\n", calcMin(array, SIZE));
                break;
            case 4:
                printf("\nMaksimum wynosi: %d\n", calcMax(array, SIZE));
                break;
            case 5:
                printf("\nWprowadz nowe dane:\n");
                fetchData(array, SIZE);
                break;
            case 6:
                editValue(array, SIZE);
                break;
            case 7:
                printf("\nWyjscie...\n");
                break;
            default:
                printf("\nNiepoprawny wybor!\n");
        }
    } while (choice != 7);

    return 0;
}