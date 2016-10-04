#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_isalpha(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_isalpha", driver);
	test_it("should return true", ft_isalpha('a'), tester);
	test_it("should return true", ft_isalpha('z'), tester);
	test_it("should return true", ft_isalpha('A'), tester);
	test_it("should return true", ft_isalpha('Z'), tester);
	test_it("should return false", !ft_isalpha('\v'), tester);
	test_it("should return false", !ft_isalpha('\t'), tester);
	test_it("should return false", !ft_isalpha('\n'), tester);
	test_it("should return false", !ft_isalpha(' '), tester);
	test_it("should return false", !ft_isalpha('0'), tester);
	test_it("should return false", !ft_isalpha('9'), tester);
	test_end(tester);
}
