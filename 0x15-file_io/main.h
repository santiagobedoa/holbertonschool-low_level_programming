#ifndef MAIN_C
#define MAIN_C

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* PROTOTYPES */
ssize_t read_textfile(const char *filename, size_t letters);

#endif
