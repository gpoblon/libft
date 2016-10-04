#include <string.h>
#include <limits.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_itoa(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;

	tester = test_begin("ft_itoa", driver);

	s = ft_itoa(1);
	test_strings_should_be_same(s, "1", tester);
	free(s);

	s = ft_itoa(0);
	test_strings_should_be_same(s, "0", tester);
	free(s);

	s = ft_itoa(-1);
	test_strings_should_be_same(s, "-1", tester);
	free(s);

	s = ft_itoa(INT_MAX);
	test_it("should work with INT_MAX", atoi(s) == INT_MAX, tester);
	free(s);

	s = ft_itoa(INT_MIN);
	test_it("should work with INT_MIN", atoi(s) == INT_MIN, tester);
	free(s);

	test_end(tester);
}
