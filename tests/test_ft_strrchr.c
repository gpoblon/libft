#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strrchr(t_test_driver *driver)
{
	char	*s;
	t_test	*tester;

	tester = test_begin("ft_strrchr", driver);

	s = "000bonjour000";

	test_it("should return last char", ft_strrchr(s, '0') == s + 12, tester);
	test_it("should return fourth char", ft_strrchr(s, 'b') == s + 3, tester);
	test_it("should return eighth char", ft_strrchr(s, 'o') == s + 7, tester);
	test_it("should return NULL", ft_strrchr(s, 'A') == NULL, tester);

	test_end(tester);
}
