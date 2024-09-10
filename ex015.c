#include <stdio.h>
#include <stdlib.h>
void pass_array_by_reference(int **arr, int size) {
    int i;
    *arr = (int *)malloc(size*sizeof(int));
    if((*arr) == NULL) {
   	 printf("Allocation error.");
   	 exit(0);
    }
    for(i=0;i<size;i++) {
   	 (*arr)[i] = rand()%100;
    }
}
void print_array(int *arr, int size) {
    int i;
    for(i=0;i<size;i++) {
   	 printf("%d ",arr[i]);
    }
    printf("\n");
}
int main() {
    int *arr = NULL;
    int size;
    scanf("%d",&size);
    pass_array_by_reference(&arr,size);
    print_array(arr,size);
    printf("Array size: %d",size);
    free(arr);
    return 0;
}
