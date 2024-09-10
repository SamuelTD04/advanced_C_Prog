#include <stdio.h>
int main() {
	int *prt;
	int grades[3] = {80,90,100};
	printf("grades start at %p\n",grades);
	printf("grades: %d\n",*grades);
	printf("address: %p\n",&grades[0]);
	printf("address: %p\n",&grades[1]);
	printf("address: %p\n",&grades[2]);
	printf("grades start at %p\n",grades+1);
	printf("grades start at %p\n",grades+2);
	return 0;
}
