#include <cs50.h>
#include <stdio.h>

void print_col(int height);

int main(void)  {
    int h = get_int("Height: ");
    print_col(h);
}

void print_col(int height){
    for (int i = 0; i <= height; i++){
        printf("# %d\n", i);
    }
}
