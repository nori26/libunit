#include "../cases.h"

int	basic_test8(void)
{
	char	*s;

	s = "B-^{```{]adsf:l];BK";
	if (ft_strlen(s) == strlen(s))
		return (0);
	else
		return (-1);
}