#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *reverse(char *str) {
	int len = strlen(str);
	int i;
	int t = 0;
	char *rev;
	rev = (char*)malloc(len);
	for(i = len - 1; i >= 0; i --) {
		printf("nani" );
		rev[t++] = str[i];
	}
	rev[t] = '\0';
	printf("%s\n", rev);
	return (char *) rev;
}

int main(int argc, char const *argv[]) {
	char input[50];
	fgets(input, 256, stdin);
	char *rev = reverse(input);
	printf("%s\n", rev);
	return 0;
}