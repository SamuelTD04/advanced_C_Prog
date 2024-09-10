#include <stdio.h>
#include <stdlib.h>
int main() {
    int* arr[5];
    int i,col;
    for(i=0;i<5;i++) {
   	 printf("Insert the number of columns for the %dth row: ");
   	 scanf("%d",&col);
   	 arr[i] = (int *)calloc(col,sizeof(int));
    }
    return 0;
}
