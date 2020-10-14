#include <stdio.h>

int main () {
    char hello[] = "Hello";
    char world[10];

    world[0] = 'W';
    world[1] = 'o';
    world[2] = 'r';
    world[3] = 'l';
    world[4] = 'd';
    world[5] = '\n';
    world[6] = '\0';

    printf("%s %s", hello, world);

    return 0;
}