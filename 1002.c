
// Write a recursive function that will sum the digits of a number n.
// if n is 3425 then the answer is 14, which is the result of 3+4+2+5.

#include <stdio.h>

int sumOfDigit(int n){

    if(n==0)
        return 0;
    else
        return (n%10 + sumOfDigit(n/10));
}

int main(){

    int n;
    scanf("%d", &n);

    printf("\n%d", sumOfDigit(n));
    
    return 0;
}