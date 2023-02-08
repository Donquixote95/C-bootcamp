#include <stdio.h>

int main (void) {
    int month;
    printf("Enter the number of the month: ");
    scanf("%d", &month);  // input 함수와 비슷한 것, month variable에 assignment하겠다.

    if (month==4|| month==6 || month==9 || month==11) {
        printf("The month has 30 dasys\n");
        } else if (month==1 || month ==3 || month==5 ||
                   month==7 || month ==8 || month==10 || month==12) {
        printf("The month has 31 days\n");
    } else if (month ==2) {
        printf("The month has 28days\n");
    } else{
        printf("Don't know that month\n");
    }

    return 0;
}
/*
An else is associated with the closest unassociated if

To not be confused, it is better to clarify the associativity by using parentheses
*/