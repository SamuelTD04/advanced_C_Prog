#include <stdio.h>

typedef struct {
    char x;
    short y;
    int z;
}Point;

int main() {
    Point point;
    printf("size of x: %d\n", sizeof(point.x)); //output: 1
    printf("size of y: %d\n", sizeof(point.y)); // output: 2
    printf("size of z: %d\n", sizeof(point.z)); // output: 4
    // output of the next one should be 7, but when you run it you youll notice that the output is actually 8 
    // this is because of padding, since the compiller wants to let the data naturally aligned for the CPU 
    printf("size of point: %d\n", sizeof(point));
    // basically, the variables where stored in addresses that are multiple of their natural sizes
    // the point struct is all the region that contains the variables from start to end, including the paddings
    printf("address of x: %p\n", &point.x);
    printf("address of y: %p\n", &point.y);
    printf("address of z: %p\n", &point.z);
    printf("address of point: %p\n", &point);
    return 0;
}