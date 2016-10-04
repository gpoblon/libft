#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_tolower(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_tolower", driver);
	test_it("should return a", ft_tolower('A') == 'a', tester);
	test_it("should return b", ft_tolower('B') == 'b', tester);
	test_it("should return z", ft_tolower('Z') == 'z', tester);
	test_it("should return a", ft_tolower('a') == 'a', tester);
	test_it("should return !", ft_tolower('!') == '!', tester);
	test_end(tester);
}
