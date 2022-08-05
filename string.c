#include "string.h"

char* reverse(char *string) {
    int len = length(string);
    for(int i=0;i<len/2;i++) {
        char temp = string[i];
        string[i] = string[len-1-i];
        string[len-1-i] = temp;
    }
    return string;
}

int* length(char *string) {
    int len = 0;
    for(int i=0;string[i]!='\0';i++) { len++; };
    return len;
}