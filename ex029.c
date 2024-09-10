#include <stdio.h>
#include <stdlib.h>
#define N 5
void freemat(int **mat, int n) {
	int i;
	for(i=0;i<n;i++) {
		free(mat[i]);
	}
	free(mat);
}
void * lower_triangle_matrix(int n) {
	int i;
	int **mat = NULL;
	mat = (int **)malloc(n*sizeof(int *));
	if(mat == NULL) {
		printf("Allocation error.\n");
		exit(0);
	}
	for(i=0;i<n;i++) {
		mat[i] = (int *)calloc(i+1,sizeof(int));
		if(mat[i] == NULL) {
			printf("Allocation error.\n");
			exit(0);
		}
	}
	return mat;
}
void * upper_triangle_matrix(int n) {
	int i;
	int **mat = NULL;
	mat = (int **)malloc(n*sizeof(int *));
	if(mat == NULL) {
		printf("Allocation error.\n");
		exit(0);
	}
	for(i=0;i<n;i++) {
		mat[i] = (int *)calloc(n-i,sizeof(int));
		if(mat[i] == NULL) {
			printf("Allocation error.\n");
			exit(0);
		}
	}
	return mat;
}
/*
void print_lt_matrix(int **mat, int n) {
	int i, j;
	for(i=0;i<n;i++) {
		for(j=0;j<i+1;j++) {
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}
}
void print_ut_matrix(int **mat, int n) {
	int i, j;
	for(i=0;i<n;i++) {
		for(j=0;j<n-i;j++) {
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}
}
*/
void print_lt_matrix(int **mat, int n) {
	int i, j;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i<j) {
				printf("%5d",-1);
			}
			else {
				printf("%5d",mat[i][j]);
			}
		}
		printf("\n");
	}
}
void print_ut_matrix(int **mat, int n) {
	int i, j;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i<=j) {
				printf("%5d",mat[i][j]);
			}
			else {
				printf("%5d",-1);
			}
		}
		printf("\n");
	}
}
int main() {
	int **LTmat = NULL;
	int **UTmat = NULL;
	LTmat = lower_triangle_matrix(N);
	UTmat = upper_triangle_matrix(N);
	printf("Lower triangle matrix:\n");
	print_lt_matrix(LTmat,N);
	printf("Upper triangle matrix:\n");
	print_ut_matrix(UTmat,N);
	freemat(LTmat,N);
	freemat(UTmat,N);
	return 0;
}
