#include <stdio.h>
#include <stdlib.h>
#define N 5
void freemat(int **mat, int rows) {
    int i;
    for(i=0;i<rows;i++) {
   	 free(mat[i]);
    }
    free(mat);
}
void print_matrix(int **mat, int row, int col) {
    int i, j;
    for(i=0;i<row;i++) {
   	 for(j=0;j<col;j++) {
   		 printf("%5d",mat[i][j]);
   	 }
   	 printf("\n");
    }
}
void matrix_allocation(int ***mat, int row, int col) {
    int i;
    *mat = (int **)malloc(row*sizeof(int *));
    if(*mat == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    for(i=0;i<row;i++) {
   	 (*mat)[i] = (int *)calloc(col,sizeof(int));
   	 if((*mat)[i] == NULL) {
   		 printf("Allocation error.\n");
   		 freemat(*mat,row);
   		 exit(0);
   	 }
    }
}
int main() {
    int **mat = NULL;
    matrix_allocation(&mat,N,N);
    print_matrix(mat,N,N);
    freemat(mat,N);
    return 0;
}
