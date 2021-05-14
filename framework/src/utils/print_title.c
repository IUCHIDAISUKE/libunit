#include "../../include/utils.h"

void	print_test_title(char *title, int32_t index, int fd)
{
	ft_putstr_fd("     ", fd);
	ft_putnbr_fd(index, fd);
	ft_putstr_fd(" ", fd);
	ft_putstr_fd(title, fd);
	ft_putstr_fd(" : ", fd);
}