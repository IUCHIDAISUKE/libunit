#include "../../include/utils.h"
#include "../../include/color.h"

// Write number in fd stream
void	ft_putnbr_fd(int32_t n, int fd)
{
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	else
		write(fd, "-", n < 0);
	write(fd, &"0123456789"[ft_abs(n % 10)], 1);
}

// Write number in fd stream in color
void	ft_putnbr_fd_with_color(int32_t n, char *color, int fd)
{
	ft_putstr_fd(color, fd);
	ft_putnbr_fd(n, fd);
	ft_putstr_fd(_NORMAL, fd);
}