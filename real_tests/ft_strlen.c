#include "libft.h"
#include <signal.h>

static int	strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (n-- && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

static void	sig_generator(const char *s)
{
	char	*buse;
	char	*segv;
	char	*abrt;
	char	*ill;

	buse = "BUS ERROR";
	segv = "SEGMENTAION FAULT";
	abrt = "ABORT";
	ill = "ILLGAL";
	if (!strncmp(s, buse, 10))
		raise(SIGBUS);
	else if (!strncmp(s, segv, 18))
		raise(SIGSEGV);
	else if (!strncmp(s, abrt, 6))
		raise(SIGABRT);
	else if (!strncmp(s, ill, 7))
		raise(SIGILL);
	else
		return ;
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	sig_generator(s);
	len = 0;
	while (*s++)
		len++;
	return (len);
}
