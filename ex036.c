// 2 functions
// in the first one, return an dinamically allocated array of employees
// in the second one, dinamically allocate an array of employees by reference
#include <stdio.h>
#include <stdlib.h>
#define N 50
typedef struct {
	char name[N];
	float age;
	int id;
}EMPLOYEE;
void print_employees(EMPLOYEE *emp, int qty) {
	int i;
	for(i=0;i<qty;i++) {
		printf("Employee name: %s",emp[i].name);
		printf("Employee age: %.1f\n",emp[i].age);
		printf("Employee ID: %d\n",emp[i].id);
		printf("---------------------\n");
	}
}
EMPLOYEE * create_employee_array1(int qty) {
	int i;
	EMPLOYEE *emp = NULL;
	emp = (EMPLOYEE *)malloc(qty*sizeof(EMPLOYEE));
	if(emp == NULL) {
		printf("Allocation error.\n");
		exit(0);
	}
	for(i=0;i<qty;i++) {
		printf("Type the employee name: ");
		getchar();
		fgets(emp[i].name,N,stdin);
		printf("Type the employee age: ");
		scanf("%f",&emp[i].age);
		printf("Type the employee ID: ");
		scanf("%d",&emp[i].id);
	}
	return emp;
}
void create_employee_array2(int qty, EMPLOYEE **emp) {
	int i;
	*emp = (EMPLOYEE *)malloc(qty*sizeof(EMPLOYEE));
	if((*emp) == NULL) {
		printf("Allocation error.\n");
		exit(0);
	}
	for(i=0;i<qty;i++) {
		printf("(#2 group)Type the employee name: ");
		getchar();
		fgets((*emp+i)->name,N,stdin);
		printf("(#2 group)Type the employee age: ");
		scanf("%f",&(*emp+i)->age);
		printf("(#2 group)Type the employee ID: ");
		scanf("%d",&(*emp+i)->id);
	}
}
int main() {
	EMPLOYEE *emp1 = NULL;
	EMPLOYEE *emp2 = NULL;
	int qty1, qty2;
	printf("Number of employees in first group: ");
	scanf("%d",&qty1);
	printf("Number of employees in second group: ");
	scanf("%d",&qty2);
	emp1 = create_employee_array1(qty1);
	create_employee_array2(qty2,&emp2);
	print_employees(emp1,qty1);
	print_employees(emp2,qty2);
	free(emp1);
	free(emp2);
	return 0;
}
