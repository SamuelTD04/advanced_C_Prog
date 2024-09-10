#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int x;
	int y;
}POINT;
typedef struct {
	POINT center;
	double radius;
}CIRCLE;
int main() {
	POINT p1 = {1, 2};
	CIRCLE c1;
	c1.radius = 3.3;
	c1.center = p1;
	c1.center.x = 4;
	return 0;
}
