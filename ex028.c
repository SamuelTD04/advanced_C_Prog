#include <stdio.h>
#include <stdlib.h>
#define N 5
int ** generate_matrix(int **mat, int row, int col) {
    int i,j;
    mat = (int **)malloc(row*sizeof(int*));
    if(mat == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    for(i=0;i<row;i++) {
   	 mat[i] = (int *)malloc(col*sizeof(int));
   	 if(mat[i] == NULL) {
   		 printf("Allocation error.\n");
   		 exit(0);
   	 }
    }
    for(i=0;i<row;i++) {
   	 for(j=0;j<col;j++) {
   		 mat[i][j] = rand()%90;
   	 }
    }
    return mat;
}
void print_matrix(int **mat, int row, int col) {
    int i,j;
    for(i=0;i<row;i++) {
   	 for(j=0;j<col;j++) {
   		 printf("%5d",mat[i][j]);
   	 }
   	 printf("\n");
    }
}
void swap_rows_universal_O1(void **mat, int row1, int row2) {
    void *temp = NULL;
    temp = mat[row1];
    mat[row1] = mat[row2];
    mat[row2] = temp;
}
void swap_columns_On(int **mat, int col1, int col2, int rows) {
    int i;
    int temp;
    for(i=0;i<rows;i++) {
   	 temp = mat[i][col1];
   	 mat[i][col1] = mat[i][col2];
   	 mat[i][col2] = temp;
    }
}
int main() {
    int **mat = NULL;
    mat = generate_matrix(mat,N,N);
    print_matrix(mat,N,N);
    int row1,row2,col1,col2;
    printf("Type, separated by space, the two row positions to be swapped: ");
    scanf("%d %d",&row1,&row2);
    swap_rows_universal_O1(mat,row1,row2);
    print_matrix(mat,N,N);
    printf("Type, separated by space, the two column positions to be swapped: ");
    scanf("%d %d",&col1,&col2);
    swap_columns_On(mat,col1,col2,N);
    print_matrix(mat,N,N);
    return 0;
}
