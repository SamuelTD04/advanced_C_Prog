/*#include <stdio.h>
#include <stdlib.h>
void print_array(int *arr, int size) {
    int i;
    for(i=0;i<size;i++) {
   	 printf("%d ",arr[i]);
    }
    printf("\n");
}
int main() {
    int n,i = 0,size;
    int *arr = NULL;
    int *temp = NULL;
    scanf("%d",&n);
    if(n == -1) {
   	 return 0;
    }
    temp = (int *)malloc(size*sizeof(int));
    if(temp == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    arr = temp;
    while(n != -1) {
   	 if(i == size) {
   		 size++;
   		 temp = (int *)realloc(arr,size*sizeof(int));
   		 if(temp == NULL) {
   			 printf("Reallocation error.\n");
   			 exit(0);
   		 }
   		 arr = temp;
   	 }
   	 arr[i] = n;
   	 i++;
   	 scanf("%d",&n);
    }
    print_array(arr,size);
    printf("Array size: %d\n",size);
    free(temp);
    return 0;
}*/

//=====================================================/
//better performance version

#include <stdio.h>
#include <stdlib.h>
void print_array(int *arr, int size) {
    int i;
    for(i=0;i<size;i++) {
   	 printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int i = 0,n,size = 2;
    int *arr = NULL;
    int *temp = NULL;
    scanf("%d",&n);
    if(n == -1) {
   	 return 0;
    }
    temp = (int *)malloc(size*sizeof(int));
    if(temp == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    arr = temp;
    while(n != -1) {
   	 if(i == size) {
   		 size *= 2;
   		 temp = (int *)realloc(arr,size*sizeof(int));
   		 if(temp == NULL) {
   			 printf("Reallocation error.\n");
   			 exit(0);
   		 }
   		 arr = temp;
   	 }
   	 arr[i] = n;
   	 scanf("%d",&n);
   	 i++;
    }
    temp = (int *)realloc(arr,i*sizeof(int));
    if(temp == NULL) {
   	 printf("Reallocation error.\n");
   	 exit(0);
    }
    arr = temp;
    size = i;
    print_array(arr,size);
    printf("Array size: %d\n",size);
    free(temp);
    return 0;
}
