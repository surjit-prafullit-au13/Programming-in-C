/* Date:18/02/2018
topic: 2D array.
Problem url:https://www.hackerrank.com/challenges/2d-array/problem
Input: Length and elements of 2D array.
How to solve: ->There will be 16 hourglass, hence 16 centers (all combinations of arr[i][j],where 0<i,j<5).
              ->Find the sum of all the elements of each hourglass. Do this for all 16 hourglasses.
              ->Everytime after finding the sum of an hourglass, check if it is greater than the previous max value(initialized to -63).
              ->if greater,make it the new max.
*/

#include <stdio.h>

int main(){
    int arr[6][6];
    int i,j,max=-63,sum=0;
    for(i = 0; i < 6; i++){
       for(j = 0; j < 6; j++){
          
          scanf("%d",&arr[i][j]);
       }
    }
        for(i=1;i<5;i++){
            for(j=1;j<5;j++){
                
                sum=arr[i][j]+arr[i-1][j]+arr[i-1][j-1]+arr[i-1][j+1]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j-1];
                if(sum>max){
                    max=sum;
                }
            }
        }
    
    printf("%d",max);
    return 0;
}

/*Result: Input (stdin)

            1 1 1 0 0 0
            0 1 0 0 0 0
            1 1 1 0 0 0
            0 9 2 -4 -4 0
            0 0 0 -2 0 0
            0 0 -1 -2 -4 0
            
          Output (stdout)

            13
