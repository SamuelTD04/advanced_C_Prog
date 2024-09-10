#include <stdio.h>
void swap(int *a,int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
int main() {
    int a = 10;
    int b = 20;
    printf("a = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d b = %d\n",a,b);
    return 0;
}

//==========without using aux var============//
/*
#include <stdio.h>
void swap(int *a, int *b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
int main() {
	int a = 0b1010;
	int b = 0b00010100;
	printf("antes | a = %d b = %d\n",a,b);
	swap(&a,&b);
	printf("depois | a = %d b = %d\n",a,b);
	return 0;
}
*/
