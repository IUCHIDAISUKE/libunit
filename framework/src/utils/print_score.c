#include "../../include/utils.h"
#include "../../include/color.h"

void	print_score(int32_t your_score, int32_t full_score, int fd)
{

	ft_putnbr_fd(your_score, fd);
	ft_putstr_fd("/", fd);
	ft_putnbr_fd(full_score, fd);
	ft_putendl(" tests passed", fd);
}

void	print_score_with_color(int32_t your_score, int32_t full_score, int fd)
{
	char *color;

	color = NULL;
	if (your_score == full_score)
		color = _GREEN;
	else
		color = _RED;
	ft_putnbr_fd_with_color(your_score, color, fd);
	ft_putstr_fd("/", fd);
	ft_putnbr_fd(full_score, fd);
	ft_putendl(" tests passed", fd);
}
