#include <stdio.h>

void swap(int *x, int *y) {

    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main() {

    int num1, num2;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping num1 is %d\n", num1);
    printf("Before swapping num2 is %d\n", num2);

    swap(&num1, &num2);

    printf("After swapping num1 is %d\n", num1);
    printf("After swapping num2 is %d\n", num2);

    return 0;
}