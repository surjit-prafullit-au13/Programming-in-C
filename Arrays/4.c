/*
Problem: Rotation of array

problem link: https://www.hackerrank.com/challenges/array-left-rotation/problem

*/
#include <stdio.h>
#include <stdlib.h>


int main() {

	int n, d, i;
	scanf("%d%d", &n, &d);
	int *arr = (int *) (malloc(sizeof(int) * n));
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int *arr2 = (int*) (malloc(sizeof(int) * n));
	int j = 0;
	for (i = d; i < n; i++) {
		arr2[j] = arr[i];
		j++;
	}
	for (i = 0; i < d; i++) {
		arr2[j] = arr[i];
		j++;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", arr2[i]);
	}
	return (0);
}
