#ifndef LIBUNIT_H
#define LIBUNIT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/wait.h>
#include <signal.h>

void load_test(t_unit_test **list, char *name, int (*func)(void));

#endif /* LIBUNIT_H */
