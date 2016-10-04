#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strlen(t_test_driver *driver)
{
	char	*s;
	t_test	*tester;

	tester = test_begin("ft_strlen", driver);

	s = "Bonjour";
	test_it("should be equal to strlen", ft_strlen(s) == strlen(s), tester);

	s = "";
	test_it("should be equal to strlen", ft_strlen(s) == strlen(s), tester);

	s = "\0";
	test_it("should be equal to strlen", ft_strlen(s) == strlen(s), tester);

	s = "42\042\0";
	test_it("should be equal to strlen", ft_strlen(s) == strlen(s), tester);

	test_end(tester);
}
