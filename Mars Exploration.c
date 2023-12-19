#include <stdio.h>

int countCharacters(const char *s) {
    int count = 0;

    for (int i = 0; s[i] != '\0'; i += 3) {
        if (s[i] != 'S') {
            count++;
        }
        if (s[i + 1] != 'O') {
            count++;
        }
        if (s[i + 2] != 'S') {
            count++;
        }
    }

    return count;
}

int main() {
   
    const char *inputString = "SOSSPSSQSSOR";

    int result = countCharacters(inputString);

    printf("Number of characters are: %d\n", result);

    return 0;
}

// INPUT -SOSSPSSQSSOR
// OUTPUT -3
