#include <stdio.h>

void addition(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void subtraction(int a, int b) {
    printf("%d - %d = %d\n", a, b, a - b);
}

void multiplication(int a, int b) {
    printf("%d * %d = %d\n", a, b, a * b);
}

void division(int a, int b) {
    if(b == 0) {
        printf("Cannot divide by zero\n");
    } else {
        printf("%d / %d = %f", a, b, (float)a / b);
    }
}

int main() {
    int num1, num2;
    int choice;
    void (*ptrArr[])(int, int) = {addition, subtraction, multiplication, division};
    printf("choose the operation:\n0 - addition\n1 - subtraction\n2 - multiplication\n3 - division\n");
    scanf("%d", &choice);
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    // should validate this first, 'cause segfault and stuff :p
    if(choice < 0 || choice > 3) {
        printf("Invalid operation.\n");
    }
    
    // this is the based way B)
    (ptrArr[choice])(num1, num2);

    // this is the normie way, so lame...
    /*switch (op) {
        case '+':
            addition(num1, num2);
            break;
        case '-':
            subtraction(num1, num2);
            break;
        case '*':
            multiplication(num1, num2);
            break;
        case '/':
            division(num1, num2);
            break;
        default:
            printf("Invalid operation.");
    }*/

    // to be honest, you should just use a switch case here
    // bear in mind that switch case is basically a lookup table (in most cases), so it's fast already
    // also, the function pointer is much, MUCH more obfuscated than the switch case
    // ah, and in our case, we risk a segfault because the index is given by the user input
    // but, i'm doing this just 'cause i want to learn about function pointers...  So fuck it
    
    return 0;
}