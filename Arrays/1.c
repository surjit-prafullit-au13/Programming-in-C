/*Date:18/02/2018
Problem: Reverse the array.
Problem url:https://www.hackerrank.com/challenges/arrays-ds/problem
Input: Length and elements of the array.
How to solve: Go to the last element and traverse backwards while printing each element seperated by a space.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i; 
    scanf("%d",&n);
   int *arr=(int *)(malloc(sizeof(int)*n));
    for(i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    for(i=(n-1);i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
