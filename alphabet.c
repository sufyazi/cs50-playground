#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string phrase = get_string("Enter your string: ");

    for (int i = 0, length = strlen(phrase); i < length; i++) {
        if (i > 0) {
            // check if phrase[i] integer representation is bigger than the previous
            if (phrase[i] > phrase[i - 1]) {
                printf("Current character [%c] comes after the previous character [%c]...\n", phrase[i], phrase[i - 1]);
            } else if (phrase[i] == phrase[i - 1]) {
                printf("Current character [%c] is similar to the previous character [%c]...\n", phrase[i], phrase[i - 1]);
            } else {
                printf("Current character [%c] comes before the previous character [%c]...\n", phrase[i], phrase[i - 1]);
                printf("This string is NOT alphabetically ordered.\n");
                return 0;
            }
        }
    }
    printf("Reached the end of the string.\n");
    printf("This string is INDEED alphabetically ordered.\n");
    return 0;
}
