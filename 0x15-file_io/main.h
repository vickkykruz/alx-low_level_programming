#ifndef FILE_I_O
#define FILE_I_O

/** Include The header Files **/
#include <sys/types.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/** Prototypes **/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
