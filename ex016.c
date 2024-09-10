#include <stdio.h>
#include <stdlib.h>
void print_array(int *arr, int size) {
    int i;
    for(i=0;i<size;i++) {
   	 printf("%d ",arr[i]);
    }
    printf("\n");
}
int * no_duplex(int *arr, int size, int *newSize) {
    int i,j = 0;
    *newSize = 1;
    int *newArr = NULL;
    for(i=0;i<size-1;i++) {
   	 if(arr[i] != arr[i+1]) {
   		 (*newSize)++;
   	 }
    }
    newArr = (int *)malloc((*newSize)*sizeof(int));
    for(i=0;i<size-1;i++) {
   	 if(arr[i] != arr[i+1]) {
   		 newArr[j] = arr[i];
   		 j++;
   	 }
    }
    newArr[j] = arr[size-1];
    return newArr;
}
int main() {
    int arr[] = {1,3,3,5,6,7,7,7,8,12,12};
    int *newArr = NULL;
    int newSize;
    print_array(arr,11);
    newArr = no_duplex(arr,11,&newSize);
    print_array(newArr,newSize);
    printf("Array size: %d",newSize);
    free(newArr);
    return 0;
}
