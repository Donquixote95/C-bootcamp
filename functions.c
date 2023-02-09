#include <stdio.h>
int Factorial(int n); // Prototype 쓸 때는 semicolon 붙여야 한다. 

int main(void){
    int number;
    int answer;
    printf("Input a number: ");
    scanf("%d", &number);
    answer = Factorial(number);
    printf("The factorial of %d is %d\n", number, answer);

    return 0; // 안 쓰면 retrun이 아무 값이나 된다. 정해주는 게 더 낫다.
}

int Factorial(int n){ // return 값이 없는 함수를 만들고 싶으면 void Factorial(int n)과 같이 써야한다.
// 함수 선언할 떄는 semicolon 없어도 된다.
    int result = 1;
    for (int i =1; i <= n; i++){
        result *= i;
        }
    return result;
}
