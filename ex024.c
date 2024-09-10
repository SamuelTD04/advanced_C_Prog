#include <stdio.h>
#include <stdlib.h>
int ** allocate_2D_matrix() {
    int **mat;
    int i,row,col;
    printf("Type the number of rows: ");
    scanf("%d",&row);
    mat = (int **)calloc(row,sizeof(int *));
    if(mat == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    for(i=0;i<row;i++) {
   	 printf("Type the number of columns for the %dth row: ");
   	 scanf("%d",&col);
   	 mat[i] = (int *)calloc(col,sizeof(int));
   	 if(mat[i] == NULL) {
   		 // #TODO --> freeMatrix
   		 printf("Allocation error.\n");
   		 exit(0);
   	 }
    }
    return mat;
}
int main() {
    int **mat;
    mat = allocate_2D_matrix();
    return 0;
}
