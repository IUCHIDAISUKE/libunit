#include <string.h>
#include "../../real_tests/libft.h"

int32_t	null_word_test(void)
{
	if (ft_strlen("SEGMENTAION FAULT") == strlen("SEGMENTAION FAULT"))
		return (0);
	else
		return (1);
}
