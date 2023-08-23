#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *_strncat(char *str1, char *str2, int n)
{
int i = 0, j = 0, len1 = 0, len2 = 0;
char *cat;
if (!*str1)
str1 = "";
if (!*str2)
str2 = "";
len1 = _strlen(str1);
len2 = _strlen(str2);

if(n > len1)
n = len1;

cat = malloc((len1 + len2 + 1) * sizeof(char));
if (cat == NULL)
return (NULL);
for (i = 0; i < n; i++)
cat[i] = str1[i];
for (j = 0; j < len2; j++)
cat[i++] = str2[j];
cat[i] = '\0';
return (cat);
}
void main(void)
{
    char *str1 = "hello";
    char *str2 = "world";
    char *output =_strncat(str1, str2, 1);

    printf("%s", output);

}