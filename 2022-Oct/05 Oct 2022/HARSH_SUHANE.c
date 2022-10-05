#include <stdio.h>
#include <string.h>

int main() {
    char string[100] = "Hello Kurnool";
    int i, letters = 0, longest = 0;

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] != ' ') {
            letters++;
            if (letters > longest) {
                longest = letters;
            }
        } else {
            letters = 0;
        }
    }

    printf("longest : %d\n", longest);

    return 0;
}
