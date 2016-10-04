#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_bzero(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;
	size_t	i;

	s = malloc(sizeof(char) * 10);
	i = 0;
	while (i < 10)
		s[i++] = 1;

	tester = test_begin("ft_bzero", driver);

	test_array_not_equal((void*)s, 0, 10, tester);
	ft_bzero(s, 10);
	test_ok("should not crash", tester);
	test_array_equal((void*)s, 0, 10, tester);
	free(s);

	test_end(tester);
}
