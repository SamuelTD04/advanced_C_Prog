#include <stdio.h>
#include <stdlib.h>
int main() {
    int* arr[5];
    int i;
    for(i=0;i<5;i++) {
   	 arr[i] = (int *)calloc(3,sizeof(int));
    }
    arr[1][1] = 30;
    scanf("%d",&arr[0][2]);
    printf("Arr[4][2] = %d\n",arr[4][2]);
    return 0;
}
