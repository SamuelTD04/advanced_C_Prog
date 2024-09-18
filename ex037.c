#include <stdio.h>

typedef struct {
    char x;
    short y;
    int z;
}Point;

typedef struct {
    char x;
    double y;
    int z;
}Point1;

typedef struct {
    char x;
    int z;
    double y;
}Point2;

int main() {
    Point point;
    Point1 point1;
    Point2 point2;
    printf("size of x: %d\n", sizeof(point.x)); //output: 1
    printf("size of y: %d\n", sizeof(point.y)); // output: 2
    printf("size of z: %d\n", sizeof(point.z)); // output: 4
    // output of the next one should be 7, but when you run it you youll notice that the output is actually 8 
    // this is because of padding, since the compiller wants to let the data naturally aligned for the CPU 
    printf("size of point: %d\n", sizeof(point));
    // basically, the variables where stored in addresses that are multiple of their natural sizes
    // the point struct is all the region that contains the variables from start to end, including the paddings
    // the above is true because a struct is gonna be aligned the largest type alignment requirement (in our case, 4 B)
    printf("address of x: %p\n", &point.x);
    printf("address of y: %p\n", &point.y);
    printf("address of z: %p\n", &point.z);
    printf("address of point: %p\n", &point);

    printf("=========================\n");
    // the size of the next struct should be 13 bytes, but its actually 24!!!
    printf("size of point1: %d\n", sizeof(point1));
    // this is literally the same struct as above, but with a different variable declaration order
    printf("size of point2 %d\n", sizeof(point2));
    // see? lot better, huh? Always be careful with variable declarations when working with limited memory
    return 0;
}