#include <stdio.h>
#define N 3
int sum_array(int *ptr, int size) {
    int sum,i;
    for(i=0;i<N;i++) {
   	 sum += ptr[i];
    }
    return sum;
}
int main() {
    int grades[N] = {3,5,7};
    int result;
    result = sum_array(grades,N);
    printf("sum of all elements = %d\n",result);
    return 0;
}
