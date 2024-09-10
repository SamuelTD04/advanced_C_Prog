#include <stdio.h>
int main() {
    int a = 10;
    void *ptr = &a; //pointing to an address in memory
    printf("%d",*(int*)ptr); //especify the ammount of memory that you want to read from where ptr points
    return 0;
}
