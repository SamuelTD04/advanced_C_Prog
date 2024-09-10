#include <stdio.h>
int main() {
	int a = 5;
	int *p = NULL;
	p = &a;
	printf("a = %d\n",a);
	printf("a ADDRESS = %p\n",p);
	*p = 7;
	printf("a = %d\n",*p);
	printf("a ADDRESS = %p\n",&a);
	return 0;
}
