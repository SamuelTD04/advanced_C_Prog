#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void generic_swap(void *a, void *b, unsigned int size) {
    void *tempMem = malloc(size);
    memcpy(tempMem, a, size);
    memcpy(a, b, size);
    memcpy(b, tempMem, size);
}
int main() {
    int num1 = 5, num2 = 7;
    double avg1 = 90.556, avg2 = 89.79;
    printf("before | num1 = %d num2 = %d\n",num1,num2);
    generic_swap(&num1,&num2,sizeof(num1));
    printf("after  | num1 = %d num2 = %d\n",num1,num2);
    printf("before | avg1 = %.3f avg2 = %.3f\n",avg1,avg2);
    generic_swap(&avg1,&avg2,sizeof(avg1));
    printf("before | avg1 = %.3f avg2 = %.3f\n",avg1,avg2);
    return 0;
}
