#include <string.h>
#include "../../real_tests/libft.h"

int32_t	hello42_test(void)
{
	if (ft_strlen("hello42") == strlen("hello42"))
		return (0);
	else
		return (1);
}
