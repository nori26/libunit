#include <stdlib.h>
#include "libft.h"
#include "libunit.h"
#include "ft_list.h"

void	err_exit(t_clist *lst, t_case *data)
{
	free(data);
	ft_clst_clear(&lst, free);
	ft_putendl_fd("error", STDERR_FILENO);
	exit(EXIT_FAILURE);
}