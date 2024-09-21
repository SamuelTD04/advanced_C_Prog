#include <stdio.h>

// an enum is a set of identifiers that match a keyword to a number, from what i understood
// these working days are actually 0, 1, 2, 3 and 4. But with the 'aliases' MONDAY, TUESDAY, WEDNESDAY, etc...
enum workingDays {
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY
}; // use of uppercase letters are a convention here

int main() {
    enum workingDays userDay;
    printf("Enter the worked day: ");
    scanf("%d", &userDay);
    if(userDay == MONDAY) {
        printf("You have worked on monday.");
    }
    else if(userDay == TUESDAY) {
        printf("You have worked on tuesday.");
    }
    // ...
    return 0;
}