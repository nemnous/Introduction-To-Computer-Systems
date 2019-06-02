#include <stdio.h>
#include <string.h>

void strncpy(char* s, char* t, int n) {
	char string[100];
	for (int i = 0; i < strlen(s); ++i)
	{
		string[i] = s[i];
	}
	for (int i = 0; i < strlen(string); ++i)
	{
		if (i != n)
		{
			string[i] = t[i];
		}

		if (n == i)
		{
			break;
		}
	}

	printf("%s\n", string);
}

void strncat(char* s, char* t, int n)  {
	char string[100];
	for (int i = 0; i < strlen(s); ++i)
	{
		string[i] = s[i];
	}

	int len = strlen(s);

	for (int i = 0; i < n; ++i)
	{
		string[len++] = t[i];
	}

	printf("%s\n", string);
}


void strncmp(char* s, char* t, int n) {
	char string[100];

	for (int i = 0; i < strlen(s); ++i)
	{
		string[i] = s[i];
	}

	int check = 0;

	for (int i = 0; i < n; ++i)
	{
		if (s[i] == t[i])
		{
			check++;
		}
	}

	if (check == 0)
	{
		printf("1\n");
	} else {
		printf("0\n");
	}
}


int main(int argc, char const *argv[])
{
	char str[100],str1[100];
	int n;
	printf("Enter two strings\n");
	scanf("%s", str);
	scanf("%s",str1);
	scanf("%d", &n);
	strncpy(str,str1,n);
	strncat(str,str1,n);
	strncmp(str,str1,n);
	return 0;
}