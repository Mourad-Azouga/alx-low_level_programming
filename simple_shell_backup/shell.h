/* This is version number 1 made by Mourad */
#ifndef _SHELl_H_
#define _SHELL_H_
/* string functions prototypes */

int _strlen(char *);
int _strcmp(char *,char *;
char *_strcat(char *, char *);
char *_strncat(char *, char*, int);
char *_strcpy(char *, char*);
char *_strncpy(char *, char *, int);
char *_strdup(const char *);
char *_strchr(char *, char);
char *startwith(const char *, const char*);
void _puts(char *);
int _putchar(char);
char **strtow(char *, char);
char **strtow1(char *, char);

/* memory functions prototypes */
char *_memset(char *, char, unsigned int);
void _free(char **);
void *_realloc(void *, unsigned int, unsigned int);

#endif /*_SHELL_H_*/