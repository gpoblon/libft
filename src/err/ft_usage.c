#include "libft.h"

void	ft_usage(char *name, char *explain)
{
	ft_putstr_fd("Usage: ", 2);
	ft_putstr_fd(name, 2);
	ft_putstr_fd(explain, 2);
	ft_putstr_fd("\n", 2);
}
