#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
void print_array(int *arr, int n) {
    int i;
    for(i=0;i<n;i++) {
   	 printf("%d ",arr[i]);
    }
    printf("\n");
}
void * general_insert(void *sauceBlock, unsigned sauceSize, void *n, unsigned nSize, unsigned bytePos) {
    int i;
    void *arr2;
    arr2 = malloc(sauceSize + nSize);
    if(arr2 == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    memcpy(arr2, sauceBlock, bytePos);
    memcpy((char *)arr2 + bytePos, n, nSize);
    memcpy((char *)arr2 + bytePos + nSize, sauceBlock + bytePos, sauceSize - bytePos);
    return arr2;
}
int main() {
    int arr[N] = {3,5,7};
    int *arr2;
    int n,pos;
    print_array(arr,N);
    printf("Type the number that you want to insert: ");
    scanf("%d",&n);
    printf("Now, type the position: ");
    scanf("%d",&pos);
    arr2 = general_insert(arr,N*sizeof(int),&n,sizeof(n),pos*sizeof(int));
    print_array(arr2,N+1);
    free(arr2);
    arr2 = NULL;
    return 0;
}
