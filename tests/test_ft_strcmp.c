#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strcmp(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_strcmp", driver);

	test_it("should be equal to strcmp", ft_strcmp("42", "42") == 0, tester);
	test_it("should be equal to strcmp", ft_strcmp("42a", "42b") < 0 , tester);
	test_it("should be equal to strcmp", ft_strcmp("42b", "42a") > 0, tester);
	test_it("should be equal to strcmp", ft_strcmp("42a", "42z") < 0, tester);
	test_it("should be equal to strcmp", ft_strcmp("42z", "42a") > 0, tester);
	test_it("should be equal to strcmp", ft_strcmp("", "") == 0, tester);
	test_it("should be equal to strcmp", ft_strcmp("", "aa") < 0, tester);
	test_it("should be equal to strcmp", ft_strcmp("a", "aa") < 0, tester);

	test_end(tester);
}
