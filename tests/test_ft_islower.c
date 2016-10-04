#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_islower(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_islower", driver);
	test_it("should return true", ft_islower('a'), tester);
	test_it("should return true", ft_islower('b'), tester);
	test_it("should return true", ft_islower('z'), tester);
	test_it("should return false", !ft_islower('a' - 1), tester);
	test_it("should return false", !ft_islower('z' + 1), tester);
	test_it("should return false", !ft_islower('A'), tester);
	test_it("should return false", !ft_islower('Z'), tester);
	test_end(tester);
}
