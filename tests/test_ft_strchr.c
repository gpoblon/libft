#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strchr(t_test_driver *driver)
{
	char	*s;
	t_test	*tester;

	tester = test_begin("ft_strchr", driver);

	s = "000bonjour000";

	test_it("should return first char", ft_strchr(s, '0') == s, tester);
	test_it("should return fourth char", ft_strchr(s, 'b') == s + 3, tester);
	test_it("should return fifth char", ft_strchr(s, 'o') == s + 4, tester);
	test_it("should return NULL", ft_strchr(s, 'A') == NULL, tester);

	test_end(tester);
}
