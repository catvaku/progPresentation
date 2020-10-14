#include<stdio.h>
int main()
{
    char s[100];
    gets(s);
    int i=0, count=1;
    while(s[i] != '\0'){
        if(s[i] != ' ' && s[i+1] == ' ')
        {
            count ++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}