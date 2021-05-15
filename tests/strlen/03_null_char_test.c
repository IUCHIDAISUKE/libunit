#include <string.h>
#include "../../real_tests/libft.h"

int32_t	null_char_test(void)
{
	if (ft_strlen("\0") == strlen("\0"))
		return (0);
	else
		return (1);
}
