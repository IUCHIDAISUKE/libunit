#include "../../include/utils.h"

// Write s in fd stream
ssize_t	ft_putstr(char *s, int fd)
{
	if (!s)
		return (0);
	return (write(fd, s, ft_strlen(s)));
}

// Write s in fd stream with new line
ssize_t	ft_putendl(char *s, int fd)
{
	ssize_t	res;

	res = ft_putstr(s, fd);
	res += write(fd, "\n", 1);
	return (res);
}

// Write s in error stream
ssize_t	ft_putstrerr(char *s)
{
	if (!s)
		exit(EXIT_FAILURE);
	write(STDERR_FILENO, s, ft_strlen(s));
	exit(EXIT_FAILURE);
}

// Write s in output stream
ssize_t	ft_putstrout(char *s)
{
	if (!s)
		return (0);
	return (write(STDOUT_FILENO, s, ft_strlen(s)));
}
