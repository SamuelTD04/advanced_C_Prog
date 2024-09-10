#include <stdio.h>
#include <stdlib.h>
int main() {
    char str0[] = {'H', 'e', 'l', 'l', 'o', '\0'}; //option1
    char str1[] = "Hello"; //option2
    char *str2 = "Hello"; //option3 --> READ ONLY MEMORY
    
    str1[0] = 'G'; //can do that
    //str2[0] = 'G'; can't do that
    
    char *ptr = NULL;
    ptr = str0;
    ptr[0] = 'G'; //Gello
    
    printf("String printed from str0: %s\n",str0);
    printf("String printed from ptr: %s\n",ptr);
    
    printf("str1 before = %s\n",str1);
    printf("str2 before = %s\n",str2);
    
    //str1 = "Good-Bye"; can't do that, because "str1" is bounded to the original address that was given to it
    str2 = "Good-Bye"; //can do that, because "str2" is just a pointer, so it can just point to elsewhere
    
    printf("str1 after = %s\n",str1);
    printf("str2 after = %s\n",str2);
    
    return 0;
}
