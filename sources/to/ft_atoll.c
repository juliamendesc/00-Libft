#include "../../includes/libft.h"

int ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

long long ft_atoll(const char *str)
{
	long long res;
	int sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	if (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		if (res < 0 && sign == 1)
			return (9223372036854775807);
		else if (res < 0 && sign == -1)
			return (-9223372036854775807);
		str++;
	}
	return (res * sign);
}
