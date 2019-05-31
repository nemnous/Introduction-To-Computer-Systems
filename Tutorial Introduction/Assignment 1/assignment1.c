#include <stdio.h>

int main(int argc, char* argv[]) {
	char inp[50];
	char temp[50];

	// scanf("%s", &inp);
	fgets(inp, 256, stdin);
	int i;
	int t = 0;
	for (i = 0; inp[i+1] != '\0'; i++) {
		if(inp[i] == ' ' && inp[i+1] == ' ') {
			continue;
		}
		temp[t++] = inp[i];
	}	
		temp[t] = '\0';
		printf("%s\n",temp );

}