#include<stdio.h>

void windowSumMax(int arr[],int n, int k ){
    int left = 0;
    int right = k-1;
    int sum = 0;
    for(int i = left; i <= right;i++){
        sum +=arr[i];
    }
    printf("%d\n", sum);
    while(right <n-1){
        sum = sum -arr[left];
        left++;
        right++;
        sum = sum + arr[right];
        printf("%d\n", sum);
    }

}


int main(){
    int arr[] = {2, 1, 5, 7, 1};
    int k = 3;
    int n = 5;
    windowSumMax(arr, 5, 3);
}