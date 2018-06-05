#ifndef _UNISTD_H
#define _UNISTD_H

#include <sys/types.h>
#if (!defined __DEFINED_ssize_t)
typedef int ssize_t;
#define __DEFINED_ssize_t
#endif
#if (!defined __DEFINED_off_t)
typedef int off_t;
#define __DEFINED_off_t
#endif

int chdir(const char *);
int close(int);
char *getcwd(char *, size_t);
pid_t getpid(void);
pid_t getppid(void);
int isatty(int);
off_t lseek(int, off_t, int); /* SEEK_ */
ssize_t read(int, void *, size_t);
ssize_t write(int, const void *, size_t);
ssize_t readlink(const char *, char *, size_t);
int unlink(const char *);

#endif
