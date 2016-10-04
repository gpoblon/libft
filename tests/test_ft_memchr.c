#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_memchr(t_test_driver *driver)
{
	char	*s;
	t_test	*tester;

	tester = test_begin("ft_memchr", driver);

	s = "000bonjour000";

	test_it("should return first char", ft_memchr(s, '0', 10) == s, tester);
	test_it("should return fourth char", ft_memchr(s, 'b', 10) == s + 3, tester);
	test_it("should return fifth char", ft_memchr(s, 'o', 10) == s + 4, tester);
	test_it("should return NULL", ft_memchr(s, 'A', 10) == NULL, tester);

	test_end(tester);
}
