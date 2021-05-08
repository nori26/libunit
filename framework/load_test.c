#include "libunit.h"

void	err_exit(t_clist *lst, t_data *data)
{
	free(data);
	lst_clear(lst);
	exit(1);
}

void	load_test(t_clist **lst, char *case_name, int (*f_case)())
{
	t_data	*data;
	t_clist	*new;

	if (!lst || !case_name || !f_case)
		return ;
	if (!ft_setptr(&data, malloc(sizeof(t_data))))
		err_exit(*lst, NULL);
	data->case_name = case_name;
	data->f_case = f_case;
	if (!ft_setptr(&new, ft_clstnew(data)))
		err_exit(*lst, data);
	ft_clstadd_front(lst, new);
	g_start = 1;
}