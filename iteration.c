// while statement
/* 
#include <stdio.h>

int main(void){
    int x =0;
    while (x<10) {
        printf("%d\n", x);
        x++;
    }
}
*/ 

// Do-while Statement
/*
#include <stdio.h>

int main(void){
    int x = 0;

    do{
        printf("%d", x);
        x++;
    } while (x<0); //do를 먼저 했기 때문에 0은 출력된다.

    return 0;
}
*/

// For statement
/*
#include <stdio.h>
int main(void) {
    int x;
    for (x=0; x<10; x++) { // int x를 for 문 안에 local variable로 선언할 수도 있다. memory 측면에서 더 낫다. int x;는 지우고, for (int x =0, ...)
        printf("%d\n", x);
    }
}
*/

// Nested Loops
/*
#include <stdio.h>
int main(void) {
    for (int multiplicand =0; multiplicand <10; multiplicand++) {
        for (int multiplier =0; multiplier <10; multiplier++) {
            printf("%d\t", multiplier * multiplicand);
        }
        printf("\n");
    }
}
*/

// Break and Continue statement
// break; exits a loop or a switch statement right away
// continue; causes only the current iteration to end

#include <stdio.h>
int main(void) {
    for (int x =0; x<10; x++) {
        if (x ==5) {
            continue;
        }
        printf("%d\n", x);
    }
    return 0;
}