#include "../../include/libunit.h"

void	print_status_with_color(int32_t end_status, int fd)
{
	if (end_status == 0)
		ft_putendl_with_color("[OK]", _GREEN, fd);
	else if (end_status == 255)
		ft_putendl_with_color("[KO]", _RED, fd);
	else if (end_status == SIGSEGV)
		ft_putendl_with_color("[SEGV]", _YELLOW, fd);
	else if (end_status == SIGBUS)
		ft_putendl_with_color("[BUS ERROR]", _YELLOW, fd);
	else if (end_status == TESRA)
		ft_putendl_with_color("[THE ONE]", _BLUE, fd);
	else
		ft_putendl_with_color("[UNKNOWN ERROR]", _YELLOW, fd);
}

void	print_status(int32_t end_status, int fd)
{
	if (end_status == 0)
		ft_putendl("[OK]", fd);
	else if (end_status == 255)
		ft_putendl("[KO]", fd);
	else if (end_status == SIGSEGV)
		ft_putendl("[SEGV]", fd);
	else if (end_status == SIGBUS)
		ft_putendl("[BUS ERROR]", fd);
	else if (end_status == TESRA)
		ft_putendl("[THE ONE]", fd);
	else
		ft_putendl("[UNKNOWN ERROR]", fd);
}
