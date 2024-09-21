#include <stdio.h>

void age_func(int age) {
    printf("Your age is %d\n", age);
}

int main() {
    int age;
    
    void (*ptr)(int); // pointer to a function that takes an integer as argument and returns void
    ptr = age_func; // or ptr = &age_func
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // function call
    // age_func(age);

    // function call by dereference
    (ptr)(age); // or (*ptr)(age)

    return 0;
}