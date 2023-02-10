// Given two sorted linked lists, merge the two into one sorted linked list and return its head node.
/*
Idea
1. create a dummy node and sequentially add new nodes to it
2. Compare the two pointers, and move the pointer to the next element in the list
3. Return newList.next as the new head node
*/

#include <stdio.h>
#include <stdlib.h>

//About node
typedef struct Node{
    int val;
    struct Node *next;
} Node;


//About list
Node* merge(Node* list1, Node* list2);

int main(void){
    return 0;
}

// Function definition
Node* merge(Node* list1, Node* list2){
    Node dummy = {0, NULL};
    Node* newList = &dummy;

    while (list1 && list2) { //&& : and
        if (list1->val < list2->val){
            newList->next = list1;
            list1 = list1->next;
        }
        else {
            newList->next = list2;
            list2 = list2->next;
        }
        newList = newList->next;
    }

    if (list1){
        newList->next = list1;
    }

    else if (list2){
        newList->next = list2;
    }

    return dummy.next;
}  // Heap을 안 써도 괜찮다 왜냐하면 dummy node는 함수 내에서 사라질 것이기 때문.

// Time complexity O(n)
// memory complexity O(1)
// 왜냐하면 pointer로 구현하면 새로운 메모리가 필요하지 않음. python에서는 copy가 필요했지만.