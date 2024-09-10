#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 4
void print_array(int *arr, int n) {
    int i;
    for(i=0;i<n;i++) {
   	 printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++) {
   	 printf("%d ",i);
    }
    printf("\n");
}
void * general_remove(void *sauceBlock, unsigned sauceSize, unsigned bytePos, unsigned bytesToRemove) {
    int *arr;
    arr = malloc(sauceSize - bytesToRemove);
    if(arr == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    memcpy(arr, sauceBlock, bytePos);
    memcpy((char *)arr + bytePos, sauceBlock + bytePos + bytesToRemove, sauceSize - bytePos - bytesToRemove);
    return arr;
}
int main() {
    int arr[N] = {3,5,7,9};
    int *arr2;
    int pos;
    print_array(arr,N);
    printf("Type the position to remove: ");
    scanf("%d",&pos);
    arr2 = general_remove(arr,sizeof(arr),pos*sizeof(int),sizeof(int));
    print_array(arr2,N-1);
    free(arr2);
    arr2 = NULL;
    return 0;
}
