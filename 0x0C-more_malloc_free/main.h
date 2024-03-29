#ifndef MORE_MALLOC_CALLOC_REALLOC_FREE
#define MORE_MALLOC_CALLOC_REALLOC_FREE

/** Prototypes **/
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

/** Advance **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
#endif
