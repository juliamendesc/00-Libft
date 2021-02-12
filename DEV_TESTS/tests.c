#include <stdio.h>
#include <string.h>
#include "libft.h"

void	bzero_main(void)
{
	char a[20] = "Hello World!";
	char b[20] = "SmiLe-Idiot?";
	int i = 0;

	bzero(a, 6);
	ft_bzero(b, 6);
	while (i < 6)
	{
		if (a[i] == b[i])
			i++;
		else
		{
			printf("FAILED!\n");
			return;
		}
	}
	if (a[7] == b[7])
	{
		printf("FAILED!\n");
		return;
	}
	printf("OKAY! =D\n");
}

void	memset_main(void)
{
	char a[20] = "Hello World!";
	char b[20] = "Hello World!";

	if ((strcmp(memset(a, '5', 6), ft_memset(b, '5', 6))) == 0)
	{
		if ((strcmp(memset(a, 'o', 15), ft_memset(b, 'o', 15))) == 0)
		{
			printf( "OKAY! =D\n" );
			return;
		}
	}
	printf("FAILED!\n");
}

void	memcpy_main(void)
{
	char a[20] = "Hello World!";
	char b[20] = "!dlroW olleH";
	char c[20] = "Hello World!";
	char d[20] = "!dlroW olleH";
	char e[2] = "";
	char f[2] = "";

	if ((strcmp(memcpy(a, b, 6), ft_memcpy(c, d, 6))) == 0)
	{
		if ((strcmp(memcpy(e, b, 6), ft_memcpy(f, d, 6))) == 0)
		{
			printf("OKAY! =D\n");
			return;
		}
	}
	printf("FAILED!\n");
}

void	memccpy_main(void)
{

	char a[20] = "Hello World!";
	char b[20] = "Smile-Everyday";
	char c[20] = "Hello World!";
	char d[20] = "Hello World!";
	char e[20] = "Hello World!";
	char f[20] = "Hello World!";
	char g[20] = "Hello World!";

	char h[2] = "";
	char i[2] = "";
	char j[2] = "";

	memccpy(a, b, '\0', 12);
	ft_memccpy(d, b, '\0', 12);
	if ((strcmp(a, d)) == 0)
	{
		memccpy(c, b, 'l', 6);
		ft_memccpy(e, b, 'l', 6);
		if ((strcmp(c, e)) == 0)
		{
			memccpy(f, b, 'o', 6);
			ft_memccpy(g, b, 'o', 6);
			if ((strcmp(f, g)) == 0)
			{
				memccpy(i, h, 'a', 6);
				ft_memccpy(j, h, 'a', 6);
				if ((strcmp(i, j)) == 0)
				{
					printf("OKAY! =D\n");
					return;
				}
			}
		}
	}
	printf("FAILED!\n");
}

int	main(void)
{
	printf("Test de ft_memset :\n");
	memset_main();

	printf("Test de bzero :\n");
	bzero_main();

	printf("Test de memcpy :\n");
	memcpy_main();

	printf("Test de memccpy :\n");
	memccpy_main();
	return (0);
}
