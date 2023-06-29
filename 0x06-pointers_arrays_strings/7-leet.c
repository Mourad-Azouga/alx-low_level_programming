/**
 * leet - turn some characters into numbers
 * @str: str
 *
 * Return: str
 */
char *leet(char *str)
{
char alpha[] = "a4A4e3E3o0O0t7T7l1L1";
int i;
int j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (str[i] == alpha[j])
{
str[i] = alpha[j + 1];
break;
}
}
}
return (str);
}
