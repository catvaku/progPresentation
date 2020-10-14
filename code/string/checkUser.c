#include <stdio.h>
#include <string.h>

const char user[2][10] = {
    "vaibhav",
    "ritik"
};

const char pass[2][10] = {
    "hello",
    "world"
};

const int no_of_user = 2;

int checkUser ( char usr[], char pwd[] ) {
    int i = 0;
    for ( i = 0; i < no_of_user; i++ ) {
        if ( strcmp( usr, user[i] ) == 0 && strcmp( pwd, pass[i] ) == 0 ) {
            return 1;
        }
    }
    return 0;
}

int main () {
    char i_user[10], i_pass[10];

    int isValid = 0;

    scanf("%s%s", i_user, i_pass);

    isValid = checkUser( i_user, i_pass );

    if ( isValid == 1 ) {
        printf("Logged in...");
    } else {
        printf("Wrong user or password");
    }

    printf("\n");

    return 0;

}