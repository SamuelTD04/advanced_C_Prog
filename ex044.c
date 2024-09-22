#include <stdio.h>

int main() {
    // a const variable is a variable that can never be chnaged during the program execution
    const int year = 2000;
    const float salary = 35.87;
    // the default type of a const is int, if you do not infer the type
    const age = 35; // const int age = 35;

    // a pointer to a constant. 'int' constant that we're pointing to can't be changed
    const int *ptr;
    // constant pointer to the 'int' variable. You can change the value of pointed variable
    int *const ptr1;
    //a constant pointer pointing to a constant integer. Nothing can be changed
    const int *const ptr2;

    return 0;
}