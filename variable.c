// variable ; the most basic type of memory object

/*
A variable has a symbolic name instead of the storage location where its value resides

Compiler generates the full set of data movement operations (to/from memory)
 To this end, it needs to know a variable's name(identifier), data type, and scope(where it will be accessible)
 The infromation is given by the programmer, in a variable's declaration 


All uppercase letters are usually used for #define 

Data Type
 102, if its data type is 2's complement integer
 f, if its data type is ASCII
The compiler uses a variable's type information to allocate a proper amount of storage for the variable

C에서는 data type을 반드시 같이 써줘야 한다.

short
long
long long
*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
    int x = 1;
    int y;
    int z;

    printf("x is %d and y is %d, and z is %d\n", x, y, z);

    y = x++;
    printf("x is %d and y is %d, and z is %d\n", x, y, z);

    z = ++y;
    printf("x is %d and y is %d, and z is %d\n", x, y, z);

    x = x + 1;
    x += 1;
    x++; // 1증가 시키기, increment

//++x ; increment and evaluate
//x++ ; evaluate and increment 

    x = x - 1;
    x -= 1;
    x--; // Decrement

    int intVar = 0;
    printf("integer size is %d and the value is %d\n", 
    sizeof(intVar), intVar);

    int uintVarS;
    printf("unsinged integer size is %d\n", sizeof(uintVarS));

    short int intVarS;
    printf("short integer size is %d\n", sizeof(intVarS));

    long int intVarL;
    printf("long integer size is %d\n", sizeof(intVarL));

    long long int intVarLL;
    printf("long long integer size is %d\n", sizeof(intVarLL));

    char charVar;
    printf("char size is %d\n", sizeof(charVar));

    float floatVar;
    printf("floatVar size is %d\n", sizeof(floatVar));

    double doubleVar; //64bits를 활용해서 더 정확하게 float를 표현할 수 있는 방법
    printf("doubleVar size is %d\n", sizeof(doubleVar));

    _Bool boolVar; // 1 or 0을 받는다. True, False가 아니다. 하려면 따로 모듈을 import해서 써야함.
    printf("boolBar size is %d\n", sizeof(boolVar));

    bool boolVar2; // #include <stdbool.h>를 import했기 떄문에 가능. True, False로 나온다.
    printf("boolBar2 size is %d\n", sizeof(boolVar2));

    return 0;
}

// sizeof는 byte(8bits) 단위로 출력한다. 
// variable type is immutable.

// unsigned int is provided. signed int를 안 쓰면 같은 비트에 더 많은 unsigned int를 표시할 수 있다.

// Scope
/*
The scope of a variable is the regions of the program in which the variable is "alive" and accessible
 - All C variable must be declared before they are used
 - The C compiler infers a Variable's scope from where it is declared within the code

Local variables
 - A block is any subsection of a program beginning with { and ending with }

Global variables
 - If a variable is declared outside of all blocks, it is a global variable that can be accessed anywhere
*/

// Initializer ; Variable declarartion with an initial value 
/*
If not initialized, A local variable's value will become a garbage value 
*/

// const ; scope가 다른 상수 e.g. const double pi = 3.14
// #define ; 전체 프로그램에 영향을 미치는 상수


/*
Memory in C

Global variables are stored in global data section
 - 중간으로 주소가 점점 increase

Local variables are stored in run-time stack
 - 중간으로 주소가 점점 decrease

run-time은 프로그램이 실행되는 도중에 변한다는 뜻이다.

heap 
*/