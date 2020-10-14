#include <stdio.h>

int str_len ( char str[] ) {
    int i = 0;
    while ( str[i] != '\0' ) {
    	i++;
    }
    return i;
}

int main () {
    char hello[] = "Hello World";
    int len = str_len ( hello );

    printf("%s (%d)", hello, len);
    return 0;
}