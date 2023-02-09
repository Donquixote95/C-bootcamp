// Given two integer a,b recursively find its greatest become 

#include <stdio.h>
int gcd(int a, int b);
int factorial(int n);
int fibonacci(int n);

int main(void){
    int a, b, c;
    a = gcd(3768, 1701);
    b = factorial(5);
    c = fibonacci(10);

    printf("gcd: %d, factorial: %d, fibonacci: %d\n", a, b, c);
    return 0;
}

int gcd(int a, int b){
    if (a % b ==0){ // Base case
        return b;
    }
    else { //Recursive case
        return gcd(b, a % b);
    }
}

int factorial(int n) {
    if (n ==0) { // Base case
        return 1;
    }
    else { // Recursive case
        return n * factorial(n-1);
    }
}

int fibonacci(int n){
    if (n == 1 || n == 2){
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}