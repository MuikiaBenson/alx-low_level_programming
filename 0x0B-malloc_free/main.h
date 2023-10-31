#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);

#endif
