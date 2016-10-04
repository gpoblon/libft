#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"
#include "stdio.h"
static int	compare_to_zero(int nb1, int nb2)
{
	if (nb1 > 0 && nb2 > 0)
		return (1);
	else if (nb1 == 0 && nb2 == 0)
		return (1);
	else if (nb1 < 0 && nb2 < 0)
		return (1);
	return (0);
}

void	test_ft_memcmp(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_memcmp", driver);

	test_it("should be equal to memcmp", compare_to_zero(ft_memcmp("42", "42", 2), memcmp("42", "42", 2)), tester);
	test_it("should be equal to memcmp", compare_to_zero(ft_memcmp("42a", "42b", 3), memcmp("42a", "42b", 3)), tester);
	test_it("should be equal to memcmp", compare_to_zero(ft_memcmp("42b", "42a", 3), memcmp("42b", "42a", 3)), tester);
	test_it("should be equal to memcmp", compare_to_zero(ft_memcmp("42a", "42z", 3), memcmp("42a", "42z", 3)), tester);
	test_it("should be equal to memcmp", compare_to_zero(ft_memcmp("42z", "42a", 3), memcmp("42z", "42a", 3)), tester);
	test_it("should be equal to memcmp", compare_to_zero(ft_memcmp("", "", 1), memcmp("", "", 1)), tester);
	test_it("should be equal to memcmp", compare_to_zero(ft_memcmp("", "aa", 2), memcmp("", "aa", 2)), tester);
	test_it("should be equal to memcmp", compare_to_zero(ft_memcmp("a", "aa", 2), memcmp("a", "aa", 2)), tester);

	test_end(tester);
}
