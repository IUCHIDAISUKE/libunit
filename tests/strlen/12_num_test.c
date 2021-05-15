#include <string.h>
#include "../../real_tests/libft.h"

int32_t	num_test(void)
{
	if (ft_strlen("01234567890") == strlen("01234567890"))
		return (0);
	else
		return (1);
}
