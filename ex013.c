#include <stdio.h>
#include <stdlib.h>
#define N 7
int * gera_vetor(unsigned tam) {
    int i;
    int *vet = (int *)malloc(tam*sizeof(int));
    if(vet == NULL) {
   	 printf("Allocation error.\n");
   	 exit(0);
    }
    for(i=0;i<tam;i++) {
   	 vet[i] = rand()%1000;
    }
    return vet;
}
void escreve_vetor(int *vet, unsigned tam) {
    int i;
    for(i=0;i<tam;i++) {
   	 printf("%d ",vet[i]);
    }
    printf("\n");
}
void * myRealloc(void *srcblock, unsigned oldSize, unsigned newSize) {
    int i;
    unsigned smallSize;
    if(oldSize < newSize) {
   	 smallSize = oldSize;
    }
    else {
   	 smallSize = newSize;
    }
    char *vet2 = (char *)malloc(newSize);
    if(vet2 == NULL) {
   	 printf("Allocation error.\n");
   	 return NULL;
    }
    for(i=0;i<smallSize;i++) {
   	 vet2[i] = ((char *)srcblock)[i];
    }
    free(srcblock);
    return vet2;
}
int main() {
    int *vet;
    int tam,tam2,i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    vet = gera_vetor(tam);
    escreve_vetor(vet,tam);
    printf("Tamanho do vetor: %d\nDigite um novo tamanho: ",tam);
    scanf("%d",&tam2);
    vet = myRealloc(vet,tam*sizeof(int),tam2*sizeof(int));
    for(i=tam;i<tam2;i++) {
   	 vet[i] = rand()%1000;
    }
    escreve_vetor(vet,tam2);
    printf("Tamanho do vetor: %d",tam2);
    free(vet);
    return 0;
}
