/*
problem: maximum sum of an sub array.

problem link:https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

input: no. of test cases, length and elements of array.

solution: Kadne's algorithm.
*/
#include<stdio.h>
int max(int a, int b) {
	if (a >= b)
		return (a);
	else
		return (b);
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, i;
		scanf("%d", &n);
		int *arr = (int*) (malloc(sizeof(int) * n));
		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		int max_current = arr[0];
		int max_global = arr[0];
		for (i = 1; i < n; i++) {
			max_current = max(arr[i], max_current + arr[i]);
			if (max_current > max_global)
				max_global = max_current;

		}
		printf("%d\n", max_global);
	}
	return (0);
}

