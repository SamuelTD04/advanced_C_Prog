#include <stdio.h>
#include <stdlib.h>
int main() {
    int **arr;
    int lin,col,i;
    printf("Type the number of rows: ");
    scanf("%d",&lin);
    arr = (int **)calloc(lin,sizeof(int*));
    for(i=0;i<lin;i++) {
   	 printf("Type the number of columns: ");
   	 scanf("%d",&col);
   	 arr[i] = (int *)calloc(col,sizeof(int));
    }
    return 0;
}
