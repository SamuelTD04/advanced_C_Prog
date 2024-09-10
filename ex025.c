#include <stdio.h>
#include <stdlib.h>
void print_2D_matrix(int **mat, int lin, int col) {
    int i,j;
    for(i=0;i<lin;i++) {
   	 for(j=0;j<col;j++) {
   		 printf("9%d ",mat[i][j]);
   	 }
   	 printf("\n");
    }
}
int main() {
    // Create Matrix
    // Assign Values
    // Print Matrix
    return 0;
}
