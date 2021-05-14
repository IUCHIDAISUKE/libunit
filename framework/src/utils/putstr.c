#include "../../include/utils.h"

// Write s in fd stream
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// Write s in fd stream with new line
void	ft_putendl(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// Write s in fd stream with new line in color
void	ft_putendl_with_color(char *s, char *color, int fd)
{
	ft_putstr_fd(color, fd);
	ft_putendl(s, fd);
}

// Write s in error stream
int32_t	ft_putstrerr(char *s)
{
	if (!s)
		exit(EXIT_FAILURE);
	write(STDERR_FILENO, s, ft_strlen(s));
	exit(EXIT_FAILURE);
}

// Write number in fd stream
void	ft_putnbr_fd(int32_t n, int fd)
{
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	else
		write(fd, "-", n < 0);
	write(fd, &"0123456789"[ft_abs(n % 10)], 1);
}
