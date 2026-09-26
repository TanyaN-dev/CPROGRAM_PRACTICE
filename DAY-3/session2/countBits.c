#include<stdio.h>

int CountBits( int n){
    int count = 0;
    while(n>0) {
        int add = n&1;
        count = count + add;
        n = n>>1;
    }
    return count; 
}

int countingBitsForN(int n ){
    int result[100];
    for(int i = 0; i <=n; i++){
        result[i]= CountBits(i);
    }
}

int main(){
    int n = 5;
    int *result;
    for(int i = 0; i< n ; i++){
        printf("%d",result[i]);
    }

}