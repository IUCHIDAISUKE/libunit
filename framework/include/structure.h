#ifndef STRUCTURE_H
#define STRUCTURE_H

typedef struct s_unit_test
{
	struct s_unit_test *next;
	char *title;
	int (*func)(void);
} t_unit_test;

#endif /* STRUCTURE_H */
