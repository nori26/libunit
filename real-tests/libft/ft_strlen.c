#include "libft.h"
#include <stdint.h>

size_t	ft_strlen(const char *str)
{
	uint64_t		ascii_001;
	uint64_t		sign_mask;
	uint64_t const	*long_tmp;
	char const		*char_tmp;

	char_tmp = str;
	while ((uint64_t)char_tmp & 0b111)
		if (!*char_tmp++)
			return (--char_tmp - str);
	long_tmp = (uint64_t *)char_tmp;
	ascii_001 = 0x0101010101010101;
	sign_mask = 0x8080808080808080;
	while (1)
	{
		if (((*long_tmp - ascii_001) & ~*long_tmp & sign_mask))
		{
			char_tmp = (const char *)long_tmp;
			while (*char_tmp)
				char_tmp++;
			return (char_tmp - str);
		}
		long_tmp++;
	}
}
