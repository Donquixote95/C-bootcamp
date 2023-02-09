#include <stdio.h>
#define SIZE 10

void selection_sort(int L[], int size);

int main(void){
    int L[SIZE] = {9,-8, -1, 6, 23, 4, 3, 11, 85, 0};

    for (int i = 0; i <SIZE; i++){
        printf("%d ", L[i]);
    }
    printf("\n");

    selection_sort(L, SIZE);

    for (int i=0; i <SIZE; i++){
        printf("%d ", L[i]);
    }
    printf("\n");
}

void selection_sort(int L[], int size){ //L[] ; []를 붙이면 Call by reference가 되어서 값을 바꿀 수 있다. // call by value가 아니다.
    int smallest;
    int temp;

    for (int i=0 ; i < size; i++){
        smallest = i;
        for (int j=i+1; j < size; j++){
            if (L[j] < L[smallest]){
                smallest = j;
            }
        }
        temp = L[i];
        L[i] = L[smallest];
        L[smallest] = temp;
    }
}