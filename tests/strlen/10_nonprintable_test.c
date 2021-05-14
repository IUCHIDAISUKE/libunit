#include <string.h>
#include "../../real_tests/libft.h"

int32_t	non_printable_test(void)
{
	if (ft_strlen("\1\2\3\4\5\6\7\b\t\10\11\12\13\14\15\16\17\18\19\20\
	\21\22\23\24\25\26\27\28\29\30\31\32") == strlen("\1\2\3\4\5\6\7\b\t\10\11\
	\12\13\14\15\16\17\18\19\20\21\22\23\24\25\26\27\28\29\30\31\32"))
		return (0);
	else
		return (1);
}
