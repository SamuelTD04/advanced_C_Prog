#include <stdio.h>

// if we start the first one with a specific integer, the rest will be incremented based on him
// so this list will go from 1 up to 12, instead of 0 up to 11
enum months {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OUT, NOV, DEC
};
// you can also assign a specific value for each variable in the enum if ya want
enum test {
    item = 20, otherItem = 10, lastItem = 99
};

int main() {
    enum months month;
    int salaries[13] = {0, 10, 20, 30, 25, 50, 35, 25, 20, 60, 25, 35, 40}; // 0 at beg otherwise out of bounds later
    for(month = JAN; month <= DEC; month++) {
        printf("%2d%10d\n", month, salaries[month]);
    }
    return 0;
}
// all of this is basically for code readability