#include "toupper_tests.h"

int toupper_not_ascii(void)
{
	return (-(ft_toupper(555) != toupper(555)));
}
