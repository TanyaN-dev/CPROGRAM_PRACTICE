#include<stdio.h>
#include<stdbool.h>

bool canBallReach(int nums[],int n){
    int maxReach = 0;
    for(int i=0; i<n ; i++){
        if(i>maxReach){
            return false;
        }
        else{
            maxReach = i+nums[i];
        }
        if(maxReach>=n){
            return true;
        }
        return true;
    }
}

int main(){
    int nums[] = {2,3,4,1,1,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("%d",canBallReach(nums,n));
}
