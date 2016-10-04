#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

int		counter = 0;

void	set_to_zero(char *c)
{
	*c = 0;
	++counter;
}

void	test_ft_striter(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;

	tester = test_begin("ft_striter", driver);

	s = malloc(sizeof(char) * 10);
	strcpy(s, "bonjoursj");
	ft_striter(s, &set_to_zero);
	test_array_equal((void*)s, 0, 9, tester);

	free(s);
	test_end(tester);
}
