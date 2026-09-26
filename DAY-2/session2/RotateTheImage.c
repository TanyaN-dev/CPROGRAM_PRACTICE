#include<stdio.h>

void rotate(int matrix[][3],int n){

    for(int i = 0; i<n; i++){
        for(int j= i; j<n;j++){
            int temp= matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i= 0; i<n; i++){
        int temp = matrix[i][right];
        matrix[i][right]=temp;

        left++;
        right++;
    }
    }
}