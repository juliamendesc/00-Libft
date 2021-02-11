#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include "libft.h"

int	main(void)
{
	printf("Test de ft_memset :\n");
	char s[100] = "aaaaa";
	char sbis[100] = "aaaaa";
	if (!strcmp(memset(s, 'z', 3), ft_memset(sbis, 'z', 3)))
		printf("OK\n");
	else
		printf("Failed : expected '%s', got '%s'.\n", s, sbis);
	printf("\n");
	return (0);
}
