#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
void print_array(int *arr, int n) {
    int i;
    for(i=0;i<n;i++) {
   	 printf("%d ",arr[i]);
    }
    printf("\n");
}
void copy_array(int *sauceArr, int **newArr, unsigned bytes) {
    *newArr = (int *)malloc(bytes);
    if(newArr == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    memcpy(*newArr, sauceArr, bytes);
}
int main() {
    int arr[N] = {66,70,81,84,90};
    int *arr2 = NULL;
    printf("Original array: \n");
    print_array(arr,N);
    copy_array(arr,&arr2,sizeof(arr));
    printf("Original array copy: \n");
    print_array(arr2,N);
    free(arr2);
    arr2 = NULL;
    return 0;
}
