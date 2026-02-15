#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int *arr = (int*) malloc(5 * sizeof(int));
    if (!arr) {
        perror("malloc failed");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    printf("Initial array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *tmp = (int*) realloc(arr, 10 * sizeof(int));
    if (!tmp) {
        perror("realloc failed");
        free(arr);
        return 1;
    }
    arr = tmp;

    for (i = 5; i < 10; i++) {
        arr[i] = i + 1;
    }

    printf("Resized array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
