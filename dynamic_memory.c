// Heap ; for dynamically allocated memory, not run-time stack

/*
stack 
 - grow upwards
 - allocation and deallocation are automatically done by the compiler
 - Local variable access
 - Faster and no fragmentation

 heap
 - grows downwards
 - allocation and deallocation are manually done by the programmer
 - Global variable access
 - Slower and fragmented
*/

/*
Dynamic Memory allocation - malloc(memory allocation)

allocation: malloc function
 - Parameter: Requested memory size(bytes)
 - Reserve a contiguous memory block of the requested size in the heap space
 - Return: a pointer to the reserved block or NULL when failing to reserve the block (lack of memory)
 - It is safe to check if the return is NULL or not
 - <stdlib.h> needs to be included
 - Once a block is allocated on the heap, the block survives until we explicitly deallocate it
 - In contrasts to variables in stack that are automatically added and removed
*/

// int *intPtr;
// intPtr = (int *) malloc(sizeof(int)); //int 1 개를 저장할 4byte 공간을 할당하는 것

// cahr *cPtr;
// cPtr = (char *) malloc(sizeof(char)); //character는 1byte, (char *)는 type cast, return받을 타입을 정하는 것

// Student *sPtr;
// sPtr = (Student *) malloc(STUDENTS_NUMS*sizeof(STUDENT));

// yes, malloc returns a pointer, what data type?
// A generic pointer of type void
// You need to type cast the generic pointer for your needs
// Type cast!
// var = (newType)expression

//free ; memory를 없애는 것
/*
free(intPtr);
free(cPtr);
free(sPtr);
로 해주면 memory deallocation 된 것이다.
free(pointer);
*/

//single Linked Lists in C(no sentinel)
//Delete a node from SLList
/*
for simplicity, we assume that every node has a unique integer
step 1) make a search function 
 - Linked

step2) make a delete function that is a bit more complex than searchNode since you need to reorganize next pointers and decrease list size
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct nodeType LinkedNode;
struct nodeType {
    int val;
    LinkedNode *next; //다음 linkednode를 가리킬 수 있는 pointer 이름은 next
};

// python에서 __init__에 해당하는 내용
LinkedNode *createNode(int x){
    LinkedNode *newNode;
    newNode = (LinkedNode*) malloc(sizeof(LinkedNode)); //heap 공간을 가리키는 pointer를 만든다. (LinkedNode*)는 typecast
    newNode->val = x; //structure의 pointer이기 때문에 ->를 통해서 값에 접근 가능하다.
    newNode->next = NULL;
    return newNode;
}


//List와 관련된 내용
typedef struct listType SLList;
struct listType {
    LinkedNode *first;
    int size;
};

int getFirst(SLList *LL);
void addFirst(SLList *LL, int x);
int getSize(SLList *LL);
void printSLList(SLList *LL);
LinkedNode *searchNode(SLList *LL, int x);
void deleteNode(SLList *LL, int x);

int main(void){
    SLList myLL = {NULL, 0};
    // addFirst(&myLL, 10); //myLL의 주소를 넘겨야 직접 조작이 가능하고, size 10이 myLL에 들어가야 한다.
    // printf("%d\n", getFirst(&myLL));
    // printf("%d\n", getSize(&myLL));
    printSLList(&myLL);

    addFirst(&myLL, 10);
    printSLList(&myLL);

    addFirst(&myLL, 20);
    printSLList(&myLL);

    addFirst(&myLL, 30);
    printSLList(&myLL);

    deleteNode(&myLL, 20);
    printSLList(&myLL);

    deleteNode(&myLL, 30);
    printSLList(&myLL);

    return 0;
}

// Function definition
void deleteNode(SLList *LL, int x){
    LinkedNode *curr = LL->first;
    LinkedNode *prev = NULL;

    while (curr != NULL){
        if (curr->val ==x){
            if (curr == LL->first){
                LL->first = LL->first->next;
            }
            else {
                prev->next = curr->next;
            }
            free(curr);
            LL->size--;
            return;
        }
        else {
            prev = curr;
            curr = curr->next;
        }
    }
}

LinkedNode *searchNode(SLList *LL, int x){
    LinkedNode *curr = LL->first;

    while (curr != NULL){
        if (curr->val == x){
            return curr;
        }
        curr = curr -> next;
    }
    return NULL;
}

void printSLList(SLList *LL){
    LinkedNode *curr = LL->first;
    printf("size: %d, firstVal: %d, allVals:", getSize(LL), getFirst(LL));
    while (curr!= NULL){
        printf("%d->", curr->val);
        curr = curr->next;
    }
    printf("END\n");
}

int getSize(SLList *LL){
        return LL->size;
}

int getFirst(SLList *LL){
    if (LL->first != NULL){
        return LL->first->val;
    }
    return 0;
}

void addFirst(SLList *LL, int x){
    LinkedNode *newFirst = createNode(x);
    newFirst->next = LL->first;
    LL->first = newFirst;
    LL->size++;
}