#include <cs50.h>
#include <stdio.h>

int main(void) {
   
   int size = get_int("How big do you want the array to be? ::: ");
   int seq[size];

    seq[0] = 1;

    printf("%i\n", seq[0]);

    for (int i = 1; i < size; i++) {
        seq[i] = seq[i-1] * 2;
        printf("%i\n", seq[i]);
    }
}