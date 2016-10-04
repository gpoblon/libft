#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_memset(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;
	size_t	i;

	s = malloc(sizeof(char) * 10);
	bzero(s, 10);

	tester = test_begin("ft_memset", driver);

	test_array_not_equal((void*)s, 1, 10, tester);
	ft_memset(s, 1, 10);
	test_ok("should not crash", tester);
	test_array_equal((void*)s, 1, 10, tester);

	free(s);
	test_end(tester);
}
