#include <stdio.h>
#include <stdbool.h>
// A Simple Calculator
#include <stdio.h>

int main(void){
    int operand1, operand2; //two input values
    int result = 0; //ouput value
    char operation; //operation to perform

//Get the input values and operator
printf("Enter first operand: ");
scanf("%d", &operand1);
printf("Enter operation to perform: ");
scanf("\n%c", &operation);
printf("Enter second operand: ");
scanf("%d", &operand2);

//Perform calculation
switch(operation){
    case '+':
        result = operand1 + operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        if(operand2 != 0){
            result = operand1 / operand2;
        }
        else{
            printf("Invalid operation!\n");
            return 0;
        }
        break;
    default:
        printf("Sorry, we don't know what you said.\n");
        return 0;
} //end switch

    printf("The answer is %d\n", result);

    return 0;
} //end main

/*
int main(void){
    int n = 10324;

    for (int divisor = 2; divisor <= n; divisor++) {
        int count = 0;
        while (n % divisor == 0) {
            count++;
            n = n / divisor;
        }
        if (count > 0) {
            printf("(%d %d)", divisor, count);
        }
    }

    return 0;
}
*/

/*
int main(void){
    for (int num = 2; num <= 100; num++){
        bool prime = true;

        for (int divisor = 2; divisor < num; divisor++) {
            if (num%divisor == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            printf("%d\n", num);
        }
    }
}
*/