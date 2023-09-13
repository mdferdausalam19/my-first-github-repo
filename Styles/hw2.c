#include <stdio.h>

float division(float x, float y) {
    float div = (float) x / y;
    return div;
}

int multiplication(int x, int y) {
    return x * y;
}

int subtraction(int x, int y) {
    return x - y;
}

int addition(int x, int y) {
    return x + y;
}

int main() {

    int num1, num2;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);

    int add = addition(num1, num2);
    printf("Addition of %d & %d is %d \n", num1, num2, add);

    int sub = subtraction(num1, num2);
    printf("Subtraction of %d & %d is %d \n", num1, num2, sub);

    int mul = multiplication(num1, num2);
    printf("Multiplication of %d & %d is %d \n", num1, num2, mul);

    float div = division(num1, num2);
    printf("Division of %d & %d is %.1f \n", num1, num2, div);

    return 0;
}