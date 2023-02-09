// Array - Relationship with pointer
// data type은 reassignment가 되지 않는다.
// Array 이름 자체는 array[0] 주소를 가리킨다. &array[0]

/*
#include <stdio.h>

int main(void){
    char word[10]="winter";
    char word2[7]="Spring"; //6으로 하면 end marker를 저장할 공간이 없다. 동작은 되지만, 제대로 되진 않는다.

    printf("%s\n", word);

    for (int i=0; i<10; i++){
        printf("%c\n", word[i]);
    }

    // printf("%s", word2);

    return 0;
}
*/

/*
An array is a collection of similar data items that are stored sequentially in memory and acccessible through a single name or identifier

In contrast to lists in Python, an array in C
 - can store only a single data type
 - has a fixed size

 Declaration - int grid[8];
  - gird is an array of eight integer variables
  - The first element (grid[0]) is allocated in the lowest memory address
*/

/*
Array - String (Array of Characters)
Strings in C are simply arrays of character type
 - char word[10];
 - To store "winter"(6 characters) in word, we need to mark where the string ends
 - e.g. the mark is word[7] = '\0';
 - \0 is the special character sequence that indicates the null character whose ASCII value is 0
 - Serves as a sentinel that identifies the end of a string
 - We must reserve one element for the null character, and
 - Thus, word can store a string comprising up to 9 characters
Printf("%s", word); // should print winter, %s is the format specification for string
Printf("%c", ...) //character 1개만 출력된다.

Strings can also be initialized within their declarations
 - char word[10]="winter";
 - printf("%s", word);
 - Single quotes '' for one character, double quotes "" for a string
 - the null character \0 is automatically added to the end of the string
*/

/*
#include <stdio.h>
#define NUM_STUDENTS 5 //constant로 선언

int main(void){
    int midterm[NUM_STUDENTS]; //variable로 해도 되지만 compiler 입장에서 복잡하다.
    int final[NUM_STUDENTS];
    int total[NUM_STUDENTS];

    //Input exam scores
    for (int i =0; i < NUM_STUDENTS; i++){
        printf("Input midterm score for student %d: ",i);
        scanf("%d", &midterm[i]);
        printf("Input final score for student %d", i);
        scanf("%d", &final[i]);
    }

    //Calculate total scores
    for (int i=0; i <NUM_STUDENTS; i++){
        total[i] = midterm[i] + final[i];
    }

    // Output the total scores
    for (int i=0; i <NUM_STUDENTS; i++){
        printf("Total score for Student %d is %d\n", i, total[i]);
    }

    return 0;
}
*/