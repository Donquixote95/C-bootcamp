#include <stdio.h>

void newSwap(int *firstVal, int *secondVal);
int main(void){
    int valA = 7;
    int valB = 5;
    printf("Before Swap: valA = %d, valB = %d\n", valA, valB);
    newSwap(&valA, &valB);
    printf("After SWap: val= %d, valB=%d\n", valA, valB);
    return 0;
}

void newSwap(int *firstVal, int *secondVal){
    int tempVal;
    tempVal = *firstVal;
    *firstVal = *secondVal;
    *secondVal = tempVal;
    printf("In Swap: firstVal = %d, secondVal = %d\n", *firstVal, *secondVal);
}

// Null pointers ; int *ptr; ptr = NULL; 

// void swap(int firstVal, int secondVal);

// int main(void){
//     int *intPtr;
//     int intVar = 5;

//     intPtr = &intVar;
//     printf("%d %d %d %d\n", intPtr, *intPtr, &intVar, intVar);

//     *intPtr += 3;
//     printf("%d %d\n", *intPtr, intPtr);
//     return 0;
// }

// int *ptr; ptr is a variable that contains an address of an integer variable
// char *ptr; ptr is avariable that contains an address of a character variable
// float *ptr; ptr is avariable that contains an address of a float variable

// Address operator ; &
// indirection operator ; * (dereference operator)

// int intVariable = 10;
// int *intPtr;
// intPtr = &intVariable;
 // Now intPtr contains intVariable's address
 // *intPtr is the value in the memory object that intPtr points to(i.e. intVariable's value, 10)
 // *intPtr = *intPtr + 2 is the same as intVariable = intVariable+2


/*
#include <stdio.h>

void swap(int firstVal, int secondVal);
int main(void){
    int valA = 7;
    int valB = 5;
    printf("Before Swap: valA = %d, valB = %d\n", valA, valB);
    swap(valA, valB);
    printf("After SWap: val= %d, valB=%d\n", valA, valB);
    return 0;
}

void swap(int firstVal, int secondVal){
    int tempVal;
    tempVal = firstVal;
    firstVal = secondVal;
    secondVal = tempVal;
    printf("In Swap: firstVal = %d, secondVal = %d\n" firstVal, secondVal);
}

*/