#include <stdio.h>
int _strcmp(char *str1, char *str2)
{
while (*str1 && *str2)
{
if (*str1 != *str2)
return(*str1 - *str2);
str1++;
str2++;
}
if (*str1 == *str2)
return (0);
else
{
if (*str1 > *str2)
return (1);
else
return (-1);
}
}
void main(void)
{
int n = 0;
char *st1 = "abc";
char *st2 = "abcdf";

n = _strcmp(st1, st2);
printf("%d", n);
    
}