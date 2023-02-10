// Structures ; a set of variables
/*
A convenient way of representing objects that are best represented by combinations of the basic data types

For example, if there are many characteristics of a student, such as name, midterm, final, and total, we can declare a single memory object(i.e. structure) that represents a student

struct studentType student ; struct studentType 둘을 합쳐서 data type으로 취급

typedef
 - C strucutres enable programmers to define their own aggregate types
 - ex) typedef int intNum;
 - Typedef struct studentType Student;

structures Arrays and Pointers

C provides arrays of strucutres
 - 

C provides pointers for strucutres
 Student s;
 Student *sPtr = &s;

 (*sPtr).midterm or sPtr -> midterm // 포인터에서 화살표로 날려도 가능하다. structure인 경우에
*/

#include <stdio.h>
#define STUDENT_NUMS 5

struct studentType {
    char name[50];
    int ID;
    int midterm;
    int final;
    int total;
    };
    
typedef struct studentType Student;

void calculateTotal(Student *s);

int main(void){
    Student s[STUDENT_NUMS];

    for (int i=0; i <STUDENT_NUMS; i++){
        printf("[Input for Student #%d]\n",i);
        printf("\tname: ");
        scanf("%s", s[i].name); //name은 이미 주소이기 때문에 &를 붙이지 않아도 된다.
        printf("\tmidterm: ");
        scanf("%d", &s[i].midterm);
        printf("\tfinal: ");
        scanf("%d", &s[i].final);
    }

    for (int i=0; i<STUDENT_NUMS; i++){
        calculateTotal(&s[i]); //주소가 들어가도록 되어있기 떄문에 맞춰준 것
    }

    for (int i =0; i < STUDENT_NUMS; i++){
        printf("Total score for Student #%d(%s) is %d\n",
                i, s[i].name, s[i].total);
    }

    return 0;
}

void calculateTotal(Student *s){
    s->total = s->midterm + s->final;
}