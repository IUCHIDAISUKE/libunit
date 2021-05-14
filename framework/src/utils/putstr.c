#include "../../include/utils.h"
#include "../../include/color.h"

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
	ft_putstr_fd(_NORMAL, fd);
}

// Write s in error stream
int32_t	ft_putstrerr(char *s)
{
	if (!s)
		exit(EXIT_FAILURE);
	write(STDERR_FILENO, s, ft_strlen(s));
	exit(EXIT_FAILURE);
}
