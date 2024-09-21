#include <stdio.h>

void func() {
    printf("Hello, world!\n");
}

int main() {
    func();
    printf("The address of 'func' is: %p\n", func);
    printf("The address of main is: %p\n", main);
    return 0;
}