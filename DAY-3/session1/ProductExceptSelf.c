#include<stdio.h>
#include<stdlib.h>

int *productExceptSelf(int *nums, int n ){
    int prefixprod = 0;
    int suffixprod = 0;
    int *result = malloc(n*sizeof(int));
    productExceptSelf(nums,4);

    //PREFIX PRODUCT
    result[0]= 1; //the product before the first element and after the last element is always one
    for (int i = 1; i<n ; i++){
        result[i]= result[i-1]*nums[i-1];
    }

    //SUFFIX PRODUCT
    int suffix = 1;
    for(int i = n-1; i>=0; i--){
        result [i] = result[i]*suffix;
        suffix = suffix*nums[i];
    }
}

int main(){
    int nums[]={1,2,3,4};
    productExceptSelf(nums, 4);

}