#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strnequ(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_strnequ", driver);

	test_it("should return true", ft_strnequ("ok", "ok", 2), tester);
	test_it("should return true", ft_strnequ("ok\0kk", "ok\0jj", 1), tester);
	test_it("should return true", ft_strnequ("bonjouraaaa", "bonjourbbbb", 7), tester);
	test_it("should return true", ft_strnequ("kk", "oo", 0), tester);
	test_it("should return false", !ft_strnequ("ok", "okokok", 3), tester);
	test_it("should return false", !ft_strnequ("", "ok", 5), tester);
	test_it("should return false", !ft_strnequ("asdkn", "42islife", 8), tester);

	test_end(tester);
}
