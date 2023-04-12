1 #ifndef MAIN_H
  2 #define MAIN_H
  3 
  4  char *create_array(unsigned int size, char c    );
  5 char *_strdup(char *str);
  6 char *str_concat(char *s1, char *s2);
  7 int **alloc_grid(int width, int height);
  8 void free_grid(int **grid, int height);
  9 char *argstostr(int ac, char **av);
 10 char **strtow(char *str);
 11 int _putchar(char c);
 12 
 13 #endif#
