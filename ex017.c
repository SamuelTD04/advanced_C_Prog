#include <stdio.h>
#include <stdlib.h>
#define N 8
void print_array(int *arr, int size) {
    int i;
    for(i=0;i<size;i++) {
   	 printf("%d ",arr[i]);
    }
    printf("\n");
}
void odd_even_array(int *sauceArr, int size, int **oddArr, int **evenArr, int *oddArrSize, int *evenArrSize) {
    int i,oddIndex = 0,evenIndex = 0;
    *oddArrSize = 0;
    *evenArrSize = 0;
    for(i=0;i<size;i++) {
   	 if(sauceArr[i]%2 == 0) {
   		 (*evenArrSize)++;
   	 }
   	 else {
   		 (*oddArrSize)++;
   	 }
    }
    *oddArr = (int *)malloc((*oddArrSize)*sizeof(int));
    if((*oddArr) == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    *evenArr = (int *)malloc((*evenArrSize)*sizeof(int));
    if((*evenArr) == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    for(i=0;i<size;i++) {
   	 if(sauceArr[i]%2 == 0) {
   		 (*evenArr)[evenIndex] = sauceArr[i];
   		 evenIndex++;
   	 }
   	 else {
   		 (*oddArr)[oddIndex] = sauceArr[i];
   		 oddIndex++;
   	 }
    }
}
int main() {
    int arr[] = {12,5,7,8,3,10,4,9};
    int *oddArr;
    int *evenArr;
    int oddArrSize,evenArrSize;
    print_array(arr,N);
    odd_even_array(arr,N,&oddArr,&evenArr,&oddArrSize,&evenArrSize);
    printf("Array size: %d\n",N);
    print_array(oddArr,oddArrSize);
    printf("Odd array size: %d\n",oddArrSize);
    print_array(evenArr,evenArrSize);
    printf("Even array size: %d",evenArrSize);
    free(oddArr);
    free(evenArr);
    return 0;
}
