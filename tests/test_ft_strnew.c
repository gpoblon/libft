#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strnew(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;

	tester = test_begin("ft_strnew", driver);

	s = ft_strnew(10);
	test_array_equal((void*)s, 0, 10, tester);

	free(s);
	test_end(tester);
}
