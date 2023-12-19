#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100000

void bigSorting(char **unsorted, int n) {
    qsort(unsorted, n, sizeof(char *), strcmp);
}

int main() {
    int n;
    scanf("%d", &n);

    char **unsorted = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        unsorted[i] = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
        scanf("%s", unsorted[i]);
    }

    bigSorting(unsorted, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", unsorted[i]);
        free(unsorted[i]);
    }

    free(unsorted);

    return 0;
}
