// You will be given an array A and the size of that array N. Take input in the main function. You need to write a function named count_before_one() which receives that array of integers and the size of that array and return type will be 32 bit integer. The function counts the number of elements in that array until you find 1 and returns that count. Print that count in the main function

#include <stdio.h>

int count_before_one(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 1) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int result = count_before_one(arr, N);
    printf("%d\n", result);

    return 0;
}
