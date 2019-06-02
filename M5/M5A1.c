#include<stdio.h>
#include<string.h>

int strindex(char*, char);
main(){
	char s[100];
	char t;
	printf("Enter the string: ");
	//scanf("%d\n", &s);
	gets(s);
	printf("Enter the character: ");
	scanf("%c", &t);
	printf("%d\n",strindex(s, t));
}

int strindex(char* s, char t){
	for (int i = strlen(s)-1; i >= 0; i--)
	{
		/* code */
		if(s[i] == t){
			int index = i;
			return i;
		}
	}
	return -1;
}