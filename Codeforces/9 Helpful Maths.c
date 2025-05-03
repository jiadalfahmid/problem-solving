#include <stdio.h>

#include <string.h>


int main() {
    char numbers[100];
    fgets(numbers, sizeof(numbers), stdin);

    int digit[100];
    int counter = 0;


    for (int i = 0; i < strlen(numbers); i++) {
        if (numbers[i] >= '1' && numbers[i] <= '3') {
            digit[counter++] = numbers[i] - '0';
        }

    }


    for (int i = 0; i < counter - 1; i++) {
        for (int j = 0; j < counter - i - 1; j++) {
            if (digit[j] > digit[j + 1]) {
                int temp = digit[j];
                digit[j] = digit[j + 1];
                digit[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < counter; i++) {
        printf("%d", digit[i]);
        if (i < counter - 1)
            printf("+");
    }
}