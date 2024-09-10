#include <stdio.h>
#include <stdlib.h>
#define N 4
int * gera_vetor(int tam) {
    int *vet = (int *)malloc(tam*sizeof(int));
    if(vet == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    int i;
    for(i=0;i<tam;i++) {
   	 scanf("%d",&vet[i]);
    }
    return vet;
}
void escreve_vetor(int *vet) {
    int i;
    for(i=0;i<N;i++) {
   	 printf("%d ",vet[i]);
    }
    printf("\n");
}
void troca_O1(void **ptr1, void **ptr2) {
    void *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main() {
    int *vet1 = NULL;
    int *vet2 = NULL;
    vet1 = gera_vetor(N);
    escreve_vetor(vet1);
    vet2 = gera_vetor(N);
    escreve_vetor(vet2);
    troca_O1(&vet1,&vet2);
    printf("\n");
    escreve_vetor(vet1);
    escreve_vetor(vet2);
    free(vet1);
    free(vet2);
    return 0;
}
