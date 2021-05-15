#include <string.h>
#include "../../real_tests/libft.h"

int32_t	buse_test(void)
{
	if (ft_strlen("BUS ERROR") == strlen("BUS ERROR"))
		return (0);
	else
		return (1);
}
