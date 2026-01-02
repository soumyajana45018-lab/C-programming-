#include <stdio.h>

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int a = 3, b = 7;
    swap(&a, &b);
    printf("a=%d b=%d", a, b);
    return 0;
}
