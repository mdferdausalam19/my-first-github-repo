#include <stdio.h>

int checkThisNumber(int n) {
    if(n % 5 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int num; 
    printf("Enter Number: ");
    scanf("%d", &num);

    int divisibleFive = checkThisNumber(num);
    
    if(divisibleFive == 1) {
        printf("The Number is divisible by 5.");
    } else {
        printf("The Number is not divisible by 5.");
    }

    return 0;
}