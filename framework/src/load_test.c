#include "../include/utils.h"
#include "../include/structure.h"

void load_test(t_unit_test **link, char **name, func *f)
{
    t_unit_test *new;
    int32_t sz;

    if (!(ft_malloc((void **)&new, sizeof(t_unit_test), 1)))
        ft_putstrerr("Malloc error :(\n");
    sz = -1;
    while (name[++sz])
    {
        if (!ft_linkadd_back_new(&new, name[sz], f[sz]) && free_link(new, sz))
            ft_putstrerr("Link error :(\n");
    }
    *link = new;
}
