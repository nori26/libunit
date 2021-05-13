#include "cases.h"
#include <stdio.h>

int	main(void)
{
	int	ret;

	puts("\n"CYAN"\x1b[1m*********************************");
	puts("*****    42 - Unit Tests    *****");
	puts("*********************************\x1b[0m\n"RESET);
	ret = 0;
	ret += atoi_launcher();
	ret += isprint_launcher();
	ret += isalnum_launcher();
	ret += strlen_launcher();
	ret += strlcat_launcher();
	ret += tolower_launcher();
	ret += toupper_launcher();
	return (ret);
}
