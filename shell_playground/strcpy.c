#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *_strncpy(char *str2, char *str1, int n)
{

int i, len = _strlen(str1);
if (n > len)
n = len;
str2 = malloc((n + 1) * sizeof(char));

for (i = 0; i < n && str1[i] != '\0'; i++)
{
str2[i] = str1[i];
}

str2[i] = '\0';
return (str2);
}

void main(void)
{
    int n = 2;
    char s1[] = "this";
    char *s2 = _strncpy(NULL, s1, n);
    printf("%s", s2);
}