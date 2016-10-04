#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_toupper(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_toupper", driver);
	test_it("should return A", ft_toupper('a') == 'A', tester);
	test_it("should return B", ft_toupper('b') == 'B', tester);
	test_it("should return Z", ft_toupper('z') == 'Z', tester);
	test_it("should return A", ft_toupper('A') == 'A', tester);
	test_it("should return !", ft_toupper('!') == '!', tester);
	test_end(tester);
}
