#include <string.h>
#include <stdio.h>
#include <unistd.h>

#define _RED "\033[31m"

int main()
{
	int i, j;
	printf(_RED "abc\n");
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 10; j++)
		{
			const int v = i * 10 + j;
			printf("\033[%dm%03d\033[0m ", v, v);
		}
		printf("\n");
	}
}