#include "../cases.h"

int	over_long13(void)
{
	char	*s;

	s = "63410682753376583680";
	if (ft_atoi(s) == atoi(s))
		return (0);
	else
		return (-1);
}
