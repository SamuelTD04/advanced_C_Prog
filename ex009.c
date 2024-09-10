#include <stdio.h>
#define N 5
void escreve_vetor(int *vet) {
    int i;
    for(i=0;i<N;i++) {
   	 printf("%d ",vet[i]);
    }
    printf("\n");
}
void troca(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void troca_vetor(int *vet1, int *vet2) {
    int i;
    for(i=0;i<N;i++) {
   	 troca(&vet1[i],&vet2[i]);
    }
}
int main() {
    int vet1[N] = {1,3,6,8,10}, vet2[N] = {2,2,4,11,17};
    printf("Valores dos vetores antes da troca\n");
    escreve_vetor(vet1);
    escreve_vetor(vet2);
    printf("\n");
    printf("Valores dos vetores depois da troca\n");
    troca_vetor(vet1,vet2);
    escreve_vetor(vet1);
    escreve_vetor(vet2);
    return 0;
}
