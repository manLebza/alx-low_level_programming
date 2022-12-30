#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

#define min(x, y) (((x) < (y)) ? (x) : (y))

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _puchar(char c);

int len(char *str);
int find_len(char *str);
char *create_xarray(int size);
chariterate_zeroes(char *str);
void get_prod(char *pod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
#endif
