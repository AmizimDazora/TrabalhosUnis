#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hi";
    int r = strcmp(str1, str2);

    if (r == 0) {  
        printf("Strings iguais ");
    } else {
        printf("Strings diferentes ");
    }
    return 0;
}