#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char name[15];
	float age;
	int id;
}EMPLOYEE;
void print_employee(EMPLOYEE emp) {
	printf("Employee name is %s\n",emp.name);
	printf("Employee age is %.1f\n",emp.age);
	printf("Employee id is %d\n",emp.id);
}
void increase_age(EMPLOYEE *emp) {
	emp->age += 1;
}
int main() {
	EMPLOYEE employee1 = {"Jake", 24.5, 123};
	print_employee(employee1);
	increase_age(&employee1);
	printf("-------------------\n");
	print_employee(employee1);
	return 0;
}
