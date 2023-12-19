#include <stdio.h>
#include <stdlib.h>


int calculateOperations(char s[]) {
    int operations = 0;
    int n = 0;


    while (s[n] != '\0') {
        n++;
    }

    int i;
    int j = n - 1;

 
    for (i = 0; i < n / 2; i++) {
        
        operations += abs((int)s[i] - (int)s[j]);
        j--;
    }

    return operations;
}

int main() {
    int q;
    scanf("%d", &q);


    for (int i = 0; i < q; i++) {
        char inputString[100]; 
        scanf("%s", inputString);

        int result = calculateOperations(inputString);

        printf("%d\n", result);
    }

    return 0;
}

// INPUT -abc
//        abcba
//        abcd
//        cba
// OUTPUT -2
//         0
//         4
//         2
