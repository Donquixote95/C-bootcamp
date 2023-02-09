/*
Given an array arr, reverse it using pointers

Input : 3,1,4,1,5,9,2
Output : 2,9,5,1,4,1,3
*/
#include <stdio.h>
void reverse(int array[], int size);
void swap(int *a, int *b);

int main(void){
    int arr[7] = {3,1,4,1,5,9,2};
    int size = 7;

    for (int i=0; i < 7; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    reverse(arr, size);

    for (int i=0; i < 7; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}

void reverse(int array[], int size) {
    int *p1 = array; // array 자체는 array[0]의 주소와 같다.
    int *p2 = array + size -1; // array에서 size만큼 더하면 1이 더 크게 된다. 그래서 1을 빼준다.
    while (p1 < p2){
        swap(p1, p2); //swap(p1++, p2--); 도 가능하다. p1이 할 일을 하고 그 다음 1을 증가시킨다는 의미. ++p1으로 하면 증가시킨 다음에 대입하는 것이 됨.
        p1++; 
        p2--;
        }
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}