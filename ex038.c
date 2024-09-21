#include <stdio.h>

typedef struct {
    short val1;
    int val2;
    char val3;
}A;

typedef struct {
    char val1;
    int val2;
    A val3;
}B;

int main() {
    printf("size of A: %d\n", sizeof(A));
    printf("size of B: %d\n", sizeof(B));
    return 0;
}