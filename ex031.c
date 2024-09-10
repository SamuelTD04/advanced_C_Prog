#include <stdio.h>
#include <stdlib.h>
int strlenght(char *s) {
    int i = 1;
    while(s[i] != '\0') {
   	 i++;
    }
    return i;
}
char * strconcat(char *ogStr) {
    int i;
    int ogLen = strlenght(ogStr);
    char *newStr = NULL;
    newStr = (char *)malloc((ogLen*2)*sizeof(char)+1);
    for(i=0;i<ogLen;i++) {
   	 newStr[i] = ogStr[i];
   	 newStr[i + ogLen] = ogStr[i];
    }
    newStr[i + ogLen] = '\0';
    return newStr;
}
int main() {
    char s[] = {"Alpha"};
    char *s0 = NULL;
    s0 = strconcat(s);
    printf("Original string: %s\n",s);
    printf("Concatenated string: %s\n",s0);
    free(s0);
    return 0;
}
