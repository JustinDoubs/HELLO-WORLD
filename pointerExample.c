
// function that swaps two integers

#include<stdio.h>

void swap(int *x, int *y);

int main {
    int x = 8, y = 12;


    printf("x: %d y: %d", x, y);
    printf("x: %d y: %d", swap(&x, &y);
    printf("x: %d y: %d", x, y);


}

void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = tmep;

    return;
}
