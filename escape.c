#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	fprintf(stderr,"1234567890");
	sleep(1);
	fprintf(stderr, "\033[5G");
	sleep(1);
	fprintf(stderr, "\033[K");
}