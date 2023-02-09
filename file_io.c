// putchar ; print a single character (an input is assumed to be an ASCII value)
// char c = 'h';
//putchar(c);
//putchar(104); // h가 출력된다.

// getchar ; get a single character input (returns its ASCII value)
//char c;
//c = getchar();

// Buffered I/O
/*
Reading each character right after a keyboard button is pushed is error-prone
 - To address the problem, keyboard input is buffered until we press Enter
 - Before Enter is pressed, you can modify the input stream freely
*/

// Given a file F as input, count the number of characters and words in the file.

#include <stdio.h>

int main(void) {
    FILE *infile; // file pointer
    int charNum = 0;
    int wordNum = 0;
    char ch;

    // char str[50];

    infile = fopen("input.txt", "r");

    while( (ch = fgetc(infile)) != EOF){
        charNum++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0'){
            wordNum++;
        }
    }
    if (charNum > 0){ //마지막 단어의 끝 부분에 도달하면 fgetc(infile) = EOF가 되기 때문에 마지막 단어는 count가 안 된다. 그래서 하나를 더 카운트.
        wordNum++;
    }
    printf("Total character = %d\n", charNum);
    printf("Total words = %d\n", wordNum);

    fclose(infile);

// FILE *outfile;
//    outfile = fopen("output.txt", "w");

    // while (fscanf(infile, "%s", str) != EOF){
    //     fprintf(outfile, "%s ", str);
    // }

    // fclose(outfile);
    /*
    char c1;
    char c2;
    printf("Input char1:\n");
    c1=getchar();
    getchar();
    printf("Input char2:\n");
    c2=getchar(); //한 글자 입력하고 Enter를 입력하면 c2에 Enter가 들어간다.
    printf("char 1 is %c and char is %c\n",c1,c2);
    */
    return 0;
}

// printf prints out ASCII text embedded with vlaues
/*
In doing so, it must convert any non-ASCiI value, such as integer, into an ASCII value

printf("format string", values);
 - Format string consists of normal characters, special characters, and conversion specifications
 - printf examines each character in the format string sequentially
 - If the character is a normal character, it simply print this out
 - If the character is '%', it recognizes a conversion specification, such as %d. Then, the next character indicates how the next pending parameter should be interpreted
 - If the character is '\', it recognizes a special character, such as '\n'

Print conversion specifications
 %d, %i ; signed decimal
 %o ; octal
 %x, %X ; Hexadecimal(a-f or A-F)
 %u ; Unsigned decimal
 %c ; single character
 %s ; string, terminated by \0
 %f ; Floating point in decimal notation
 %e, %E ; Floating point in exponential notation
 %p ; Pointer

*/

// scanf
/*
scanf reads formatted ASCII data and converts it into another data type, if needed
 - In doing so, it must convert an ASCII value to a relrevant non-ASCII value, such as integer

scanf("format string", &variable or pointer),
 As that in printf, fomat string consists of normal characters, special characters, and conversion specifications
 scanf format string represents the format of the input stream
  - If the character is a normal character, it simply expects the next received ASCII value to be the same character and ignores it
  - If the character is '%', it recognizes a conversion specification, such as %d. Then the next character indicates how the next pending parameter should be interpreted
  - If the characgter is '\', it recognizes a specail character, such as '\n'    
 scanf("%d", &a);
  - Convert a sequence of non-white space characters into an integer and store the value in a 
  - white space: space, tab, new line, ...
  - expect to receive '/' and ignore it
  - Convert the next sequence of non-white space characters into an integer and store the value in b
scanf("%c", &a);
 - Store any single character(including white space characters) in a    
*/

/*
File pointer - a pointer that points to a type FILE
FILE *filePtr;
It moves forward as you read or write

Opening a file
filePtr = fopen("file name", mode)
fopen() returns a file pointer to the physical file "file name"

Modes
r: reading
w: writing
a: appending
r+: writing and reading

Good Practice checking if the fopen call was successful
if(filePtr == NULL)
 printf("fopen error\n");
*/

/*
char a = fgetc(filePtr);
 - REad and return a single character from a file, where filePtr points
 - EOF(End of File)
fputc(a, filePtr);
 - Write a single character a to a file, where filePtr points

fscanf(filePtr, "format string", variables);
 - Read a file, where filePtr points
 - Returns a specail value EOF when no more data can be read
fprintf(filePtr, "format string", variables);
*/