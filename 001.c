// Write a recursive function that will sum all the even numbers between 1 to n, where n is user input.

#include <stdio.h>

int sumEven(int n){

    if(n<=1)
        return 0;
    else
        return n+sumEven(n-2);
}

int main(){
    int n,sum=0,x,y;
    scanf("%d", &n);

    if (n%2==0){
        x = sumEven(n);
    }
    else{
        x = sumEven(n-1);
    }
    
    printf("%d", x);

    return 0;
}
