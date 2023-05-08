#ifndef MAIN_H
#define MAIN_H

/* tasks 0. Memset */
char *_memset(char *s, char b, unsigned int n);

/* task 1 memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* task 2 strchr */
char *_strchr(char *s, char c);

/* task 3 strspn */
unsigned int _strspn(char *s, char *accept);

/* task 4 srtpbrk */
char *_strpbrk(char *s, char *accept);

/* task 5 strstr */
char *_strstr(char *haystack, char *needle);

/* task 6 chess is mental torture */
void print_chessboard(char (*a)[8]);

/* task 7 square matrix diagonal */
void print_diagsums(int *a, int size);

/* task 8 double pointer */
void set_string(char **s, char *to);

/* _putchar header */
int _putchar(char c);

#endif
