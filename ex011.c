#include <stdio.h>
#include <stdlib.h>
int * gera_vetor(int n) {
    int i;
    int *vet;
    vet = (int *)malloc(n*sizeof(int));
    if(vet == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    for(i=0;i<n;i++) {
   	 vet[i] = rand()%30;
    }
    return vet;
}
void escreve_vetor(int *vet, int n) {
    int i;
    for(i=0;i<n;i++) {
   	 printf("%d ",vet[i]);
    }
    printf("\n");
}
int main() {
    int *vet;
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    vet = gera_vetor(n);
    escreve_vetor(vet,n);
    free(vet);
    return 0;
}
