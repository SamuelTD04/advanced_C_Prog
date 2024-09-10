#include <stdio.h>
#include <stdlib.h>
int ** allocate_2D_matrix(int row, int col) {
    int **mat;
    int i;
    mat = (int **)calloc(row,sizeof(int *));
    if(mat == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    for(i=0;i<row;i++) {
   	 mat[i] = (int *)calloc(col,sizeof(int));
   	 if(mat[i] == NULL) {
   		 // #TODO --> freeMatrix
   		 printf("Allocation error.\n");
   		 exit(0);
   	 }
    }
    return mat;
}
void print_2D_matrix(int **mat, int row, int col) {
    int i,j;
    for(i=0;i<row;i++) {
   	 for(j=0;j<col;j++) {
   		 printf("%10d",mat[i][j]);
   	 }
   	 printf("\n");
    }
}
int main() {
    int **mat;
    int r,c;
    printf("Type the number of rows in the matrix: ");
    scanf("%d",&r);
    printf("Type the number of columns in the matrix: ");
    scanf("%d",&c);
    mat = allocate_2D_matrix(r,c);
    print_2D_matrix(mat,r,c);
    return 0;
}
