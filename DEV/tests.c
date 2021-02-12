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
	//char e[2] = "";
	//char f[2] = "";

	if ((strcmp(memcpy(a, b, 6), ft_memcpy(c, d, 6))) == 0)
	{
		//if ((strcmp(memcpy(e, b, 6), ft_memcpy(f, d, 6))) == 0)
		//{
			printf("OKAY! =D\n");
			return;
		//}
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

	//char h[2] = "";
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
				//memccpy(i, h, 'a', 6);
				//ft_memccpy(j, h, 'a', 6);
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

void	memmove_main(void)
{
	char target[21] = "a shiny white sphere";

	char * p = target + 8;  /* p points at the starting character
                          of the word we want to replace */
	char * source = target + 2; /* start of "shiny" */

	if (strcmp(memmove(p, source, 5), ft_memmove(p, source, 5)) == 0)
	{
		printf( "OKAY! =D\n" );
		return;
	}
	printf("FAILED!\n");
}

void	memchr_main(void)
{
	int  ch = 'r';
//	char str[] =    "lazy";
	char string[] = "The quick brown dog jumps over the lazy fox";

	if (strcmp(memchr(string, ch, strlen(string)), ft_memchr(string, ch, strlen(string))) == 0)
	{
		printf( "OKAY! =D\n" );
		return;
	}
	printf("FAILED!\n");
}

void	memcmp_main(void)
{
	char first[30]  = "12345678901234567890";
	char second[30] = "12345678901234567891";
	//int int_arr1[] = {1,2,3,4};
	//int int_arr2[] = {1,2,3,4};

	if (memcmp(first, second, 19) == ft_memcmp(first, second, 19))
	{
		printf( "OKAY! =D\n" );
		return;
	}
	printf("FAILED!\n");
    //result = memcmp( int_arr1, int_arr2, sizeof(int) * 2 );
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

	printf("Test de memmove :\n");
	memmove_main();

	printf("Test de memchr :\n");
	memchr_main();

	printf("Test de memcmp :\n");
	memcmp_main();
	return (0);
}
