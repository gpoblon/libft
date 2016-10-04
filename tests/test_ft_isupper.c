#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_isupper(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_isupper", driver);
	test_it("should return true", ft_isupper('A'), tester);
	test_it("should return true", ft_isupper('B'), tester);
	test_it("should return true", ft_isupper('Z'), tester);
	test_it("should return false", !ft_isupper('A' - 1), tester);
	test_it("should return false", !ft_isupper('Z' + 1), tester);
	test_it("should return false", !ft_isupper('a'), tester);
	test_it("should return false", !ft_isupper('z'), tester);
	test_end(tester);
}
