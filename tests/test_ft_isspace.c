#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_isspace(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_isspace", driver);
	test_it("should return false", !ft_isspace('a'), tester);
	test_it("should return false", !ft_isspace('z'), tester);
	test_it("should return false", !ft_isspace('A'), tester);
	test_it("should return false", !ft_isspace('Z'), tester);
	test_it("should return false", !ft_isspace('0'), tester);
	test_it("should return false", !ft_isspace('9'), tester);
	test_it("should return false", !ft_isspace('\v'), tester);
	test_it("should return false", !ft_isspace('\t'), tester);
	test_it("should return false", !ft_isspace('\n'), tester);
	test_it("should return true", ft_isspace(' '), tester);
	test_it("should return false", !ft_isspace(0), tester);
	test_it("should return false", !ft_isspace(127), tester);
	test_it("should return false", !ft_isspace(128), tester);
	test_end(tester);
}
