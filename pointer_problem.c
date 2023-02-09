/*
Given two integers a and b, first reverse the order of the digits and swap them.
 ex) input a = 1234, b=67890
    output a=9876, b=4321

Implement reverse_dig() and swap with arguments a and b as references
*/

#include <stdio.h>

void reverse_dig(int *n);
void swap(int *a, int *b);

int main(void){
    int a = 1234;
    int b = 67890;

    printf("Before do anything: a = %d, b = %d\n", a, b);

    reverse_dig(&a);
    reverse_dig(&b);

    printf("After do anything: a = %d, b = %d\n", a, b);
    
    swap(&a, &b);

    printf("After finishing everything: a= %d, b=%d\n", a, b);
    return 0;
}

void reverse_dig(int *n) {
    int tmp = *n;
    int r = 0;
    int ans = 0; 

    while (tmp > 0){
        r = tmp % 10; //1의 자리를 구하는 것
        ans = ans*10 + r; // 기존의 자리수는 10을 곱해서 한 자리씩 올린다. 나머지는 1의 자리로 update되는 것
        tmp = tmp / 10; //tmp는 int이기 때문에 10으로 나눠도 정수로 표현된다.
    }
    *n = ans;
}

void swap(int *a, int *b){
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}