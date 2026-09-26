//BIT MANIPULATION
#include<stdio.h>

int main(){
    int a = 5, b = 4 ;
    a = a^b;
    b = a^b;
    a = a^b;
    printf( "the value of a and b : %d %d", a, b);
}