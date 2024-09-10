#include <stdio.h>
#include <stdlib.h>
void escreve_vetor(int *vet, int tam) {
    int i;
    printf("Your array:\n");
    for(i=0;i<tam;i++) {
   	 printf("%d ",vet[i]);
    }
}
int main() {
    int *gradesArray;
    int i, totalGrades;
    printf("Type quantity of grades: ");
    scanf("%d",&totalGrades);
    gradesArray = (int *)malloc(totalGrades*sizeof(int));
    if(gradesArray == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    for(i=0;i<totalGrades;i++) {
   	 printf("Enter grade %d: ",i+1);
   	 scanf("%d",&gradesArray[i]);
    }
    escreve_vetor(gradesArray,totalGrades);
    // Code...
    // Code...
    // Code...
    // Oh! Now i remember that i have 2 additional grades!!
    printf("\nThere are missing grades. Type new quantity of grades: ");
    scanf("%d",&totalGrades);
    gradesArray = (int *)realloc(gradesArray,totalGrades*sizeof(int));
    //===================what does realloc do:===================//
    // 1. Allocates a new sequence of elements in you computer's memory
    // 2. A copy of previous elements
    if(gradesArray == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    for(i=i;i<totalGrades;i++) {
   	 printf("Enter the grade %d: ",i+1);
   	 scanf("%d",&gradesArray[i]);
    }
    escreve_vetor(gradesArray,totalGrades);
    free(gradesArray);
    return 0;
}
