#include <stdio.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_atoi(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_atoi", driver);
	test_it("should return 0", ft_atoi("0") == atoi("0"), tester);
	test_it("should return 1", ft_atoi("1") == atoi("1"), tester);
	test_it("should return -1", ft_atoi("-1") == atoi("-1"), tester);
	test_it("should return 2147483647", ft_atoi("2147483647") == atoi("2147483647"), tester);
	test_it("should return -2147483648", ft_atoi("-2147483648") == atoi("-2147483648"), tester);
	test_it("should return -2147483648 again (overflow)", ft_atoi("2147483648") == atoi("2147483648"), tester);
	test_it("should return 42", ft_atoi("42") == atoi("42"), tester);
	test_it("should return -42", ft_atoi("-42") == atoi("-42"), tester);
	test_it("should return 84", ft_atoi("   \v\t\n84jjjj99") == atoi("   \v\t\n84jjjj99"), tester);
	test_it("should return 21", ft_atoi("    21  1  1\t1") == atoi("    21  1  1\t1"), tester);
	test_it("should return 0", ft_atoi("abcd42abcd") == atoi("abcd42abcd"), tester);
	test_end(tester);
}
