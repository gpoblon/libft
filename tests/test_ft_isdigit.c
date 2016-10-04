#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_isdigit(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_isdigit", driver);
	test_it("should return true", ft_isdigit('0'), tester);
	test_it("should return true", ft_isdigit('1'), tester);
	test_it("should return true", ft_isdigit('2'), tester);
	test_it("should return true", ft_isdigit('3'), tester);
	test_it("should return true", ft_isdigit('4'), tester);
	test_it("should return true", ft_isdigit('5'), tester);
	test_it("should return true", ft_isdigit('6'), tester);
	test_it("should return true", ft_isdigit('7'), tester);
	test_it("should return true", ft_isdigit('8'), tester);
	test_it("should return true", ft_isdigit('9'), tester);
	test_it("should return false", !ft_isdigit('0' - 1), tester);
	test_it("should return false", !ft_isdigit('9' + 1), tester);
	test_end(tester);
}
