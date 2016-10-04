#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_isprint(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_isprint", driver);
	test_it("should return true", ft_isprint('a'), tester);
	test_it("should return true", ft_isprint('z'), tester);
	test_it("should return true", ft_isprint('A'), tester);
	test_it("should return true", ft_isprint('Z'), tester);
	test_it("should return true", ft_isprint('0'), tester);
	test_it("should return true", ft_isprint('9'), tester);
	test_it("should return false", !ft_isprint('\v'), tester);
	test_it("should return false", !ft_isprint('\t'), tester);
	test_it("should return false", !ft_isprint('\n'), tester);
	test_it("should return true", ft_isprint(' '), tester);
	test_it("should return true", ft_isprint(126), tester);
	test_it("should return false", !ft_isprint(31), tester);
	test_it("should return false", !ft_isprint(0), tester);
	test_it("should return false", !ft_isprint(127), tester);
	test_it("should return false", !ft_isprint(128), tester);
	test_end(tester);
}
