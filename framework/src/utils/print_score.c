#include "../../include/utils.h"

void	print_score(int32_t your_score, int32_t full_score, int fd)
{
	ft_putnbr_fd(your_score, fd);
	ft_putstr_fd("/", fd);
	ft_putnbr_fd(full_score, fd);
	ft_putstr_fd(" tests passed", fd);
}
