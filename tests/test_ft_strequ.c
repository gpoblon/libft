#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strequ(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_strequ", driver);

	test_it("should return true", ft_strequ("ok", "ok"), tester);
	test_it("should return true", ft_strequ("ok\0kk", "ok\0jj"), tester);
	test_it("should return false", !ft_strequ("ok", "okokok"), tester);
	test_it("should return false", !ft_strequ("", "ok"), tester);
	test_it("should return false", !ft_strequ("asdkn", "42islife"), tester);

	test_end(tester);
}
