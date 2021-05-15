#include <string.h>
#include "../../real_tests/libft.h"

int32_t	dell_test(void)
{
	if (ft_strlen("\127") == strlen("\127"))
		return (0);
	else
		return (1);
}
