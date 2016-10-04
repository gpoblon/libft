#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_ispunct(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_ispunct", driver);
	test_it("should return true", ft_ispunct('!'), tester);
	test_it("should return true", ft_ispunct('.'), tester);
	test_it("should return true", ft_ispunct(':'), tester);
	test_it("should return true", ft_ispunct('@'), tester);
	test_it("should return true", ft_ispunct('['), tester);
	test_it("should return true", ft_ispunct(96), tester);
	test_it("should return false", !ft_ispunct(' '), tester);
	test_it("should return false", !ft_ispunct('a'), tester);
	test_it("should return false", !ft_ispunct('z'), tester);
	test_it("should return false", !ft_ispunct('A'), tester);
	test_it("should return false", !ft_ispunct('Z'), tester);
	test_it("should return false", !ft_ispunct('0'), tester);
	test_it("should return false", !ft_ispunct('9'), tester);
	test_end(tester);
}
