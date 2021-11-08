#include "../../../includes/libft.h"

static void print_stacks(int number)
{
	char *char_number;

	char_number = ft_itoa(number);
	ft_putstr(char_number);
	free(char_number);
}

void lst_print(char *msg, t_stacks *lst)
{
	ft_putstr(msg);
	if (lst)
	{
		while (lst->next)
		{
			print_stacks(lst->number);
			ft_putchar(' ');
			lst = lst->next;
		}
		print_stacks(lst->number);
		ft_putstr("\n");
	}
	else
	{
		ft_putstr_fd("(empty)\n", 1);
	}
}
