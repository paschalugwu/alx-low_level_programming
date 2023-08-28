#ifndef MAIN_H
#define MAIN_H

/* Function prototype for _memset */
char *_memset(char *s, char b, unsigned int n);
/* Function prototype for _memcpy */
char *_memcpy(char *dest, char *scr, unsigned int n);
/* Function prototype for strchr */
char *_strchr(char *s, char c);
/* Function prototype for strspn */
unsigned int _strspn(char *s, char *accept);
/* Function prototype for strpbrk */
char *_strpbrk(char *s, char *accept);

#endif /* MAIN_H */