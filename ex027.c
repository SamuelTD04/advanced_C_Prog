#include <stdio.h>
#include <stdlib.h>
void freeMatrix(int **mat, int row) {
    int i;
    for(i=0;i<row;i++) {
   	 free(mat[i]);
    }
    free(mat);
}
int main() {
    
    return 0;
}
