#include <stdio.h>
#include <ctype.h>

int countUppercaseLetters(const char *s) {
    int wordCount = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            wordCount++;
        }
    }

    return ++wordCount;
}

int main() {
   
    const char *inputString = "saveChangesInTheEditor";

    int result = countUppercaseLetters(inputString);

    printf("Number of uppercase letters: %d\n", result);

    return 0;
}
