#ifndef FILE_INPUT_AND_OUTPUT
#define FILE_INPUT_AND_OUTPUT

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/** Prootypes ***/
ssize_t read_textfile(const char *filename, size_t letters);
#endif
