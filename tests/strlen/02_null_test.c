#include <string.h>
#include "../../lib/libft/libft.h"

int null_test(void)
{
    if (ft_strlen("") == strlen(""))
        return (0);
    else
        return (1);
}