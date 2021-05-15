#include "../framework/include/libunit.h"
#include "strlen/strlen.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("result.log", O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (!strlen_launcher(fd))
		ft_putstr_fd("STRLEN TEST CLEAR :)\n", STDOUT_FILENO);
	else
		ft_putstr_fd("TRY AGAIN :(\n", STDOUT_FILENO);
	close (fd);
	return (0);
}
