#include <string.h>
#include "../../real_tests/libft.h"

int32_t	illigal_test(void)
{
	if (ft_strlen("ILLGAL") == strlen("ILLGAL"))
		return (0);
	else
		return (1);
}
