#include <stdio.h>
#include <string.h>

int strend(char* s, char* t) {
    while (*s++) {  
        if (*t == *s) {
            while ((*s++ == *t++) && (*t != '\0')) ;
            if (*s == '\0' && *t == '\0')
                return 1;
            return 0;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char s[100], t[100];
    printf("Enter the main string\n");
    scanf("%s", s);
    printf("Enter the string that needs to be found\n");
    scanf("%s", t);
    int num = strend(s, t);
    printf("%d\n", num);
    return 0;
}