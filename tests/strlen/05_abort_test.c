#include <string.h>
#include "../../real_tests/libft.h"

int32_t	abort_test(void)
{
	if (ft_strlen("ABORT") == strlen("ABORT"))
		return (0);
	else
		return (1);
}
