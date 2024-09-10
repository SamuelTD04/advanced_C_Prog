#include <stdio.h>
int main() {
    int a = 5;
    int *ptr1 = &a;
    int **ptr2 = &ptr1; //pointer to a pointer | cuz a pointer is also a variable (4 bytes in x86, 8 bytes in x64
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    printf("%d\n%p\n%p\n%p\n%p\n",a,ptr1,ptr2,ptr3,ptr4);
    return 0;
}
