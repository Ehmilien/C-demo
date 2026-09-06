#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int power(int a, int b) {
    return a ^ b;
}

int factorial(int a) {
    if (a == 0) {
        return 1;
    }
    return a * factorial(a - 1);
}

void ageScanner() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);

}

void nameScanner() {

    char name[50];
    printf("Enter your name: ");
    fgets(name, 50, stdin);
    printf("Your name is: %s\n", name);

}

int main() {

    // Hello, World ! (Basics)
    printf("Hello, World!\n");


    int result = add(3, 5);
    printf("Result: %d\n", result);

    int result2 = subtract(10, 5);
    printf("Result: %d\n", result2);

    int result3 = multiply(3, 5);
    printf("Result: %d\n", result3);

    int result4 = divide(10, 5);
    printf("Result: %d\n", result4);

    int result5 = power(2, 3);
    printf("Result: %d\n", result5);

    int result6 = factorial(5);
    printf("Result: %d\n", result6);

    //ageScanner();

    nameScanner();

    return 0;
}
