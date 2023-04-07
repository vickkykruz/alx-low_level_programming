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

/** Prototypes **/
ssize_t read_textfile(const char *filename, size_t letters);
#endif
