#include <stdio.h>
int main() {
    int a,b,lixo1,lixo2,lixo3;
    a = 5;
    lixo1 = 90;
    lixo2 = 0b1001;
    lixo3 = 0x2f;
    b = 7;
    printf("%p\n",&a);
    printf("%p\n",&lixo1);
    printf("%p\n",&lixo2);
    printf("%p\n",&lixo3);
    printf("%p\n",&b);
    int dist;
    dist = &a - &lixo3;
    printf("%d\n",dist*sizeof(int));
    return 0;
}
