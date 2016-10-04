#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strncmp(t_test_driver *driver)
{
	t_test	*tester;

	tester = test_begin("ft_strncmp", driver);

	test_it("ft_strncmp(\"42\", \"42\", 10)", ft_strncmp("42", "42", 10) == 0, tester);
	test_it("ft_strncmp(\"42a\", \"42b\", 10)", ft_strncmp("42a", "42b", 10) < 0, tester);
	test_it("ft_strncmp(\"42b\", \"42a\", 10)", ft_strncmp("42b", "42a", 10) > 0, tester);
	test_it("ft_strncmp(\"42a\", \"42z\", 10)", ft_strncmp("42a", "42z", 10) < 0, tester);
	test_it("ft_strncmp(\"42z\", \"42a\", 10)", ft_strncmp("42z", "42a", 10) > 0, tester);
	test_it("ft_strncmp(\"\", \"\", 10)", ft_strncmp("", "", 10) == 0, tester);
	test_it("ft_strncmp(\"\", \"aa\", 10)", ft_strncmp("", "aa", 10) < 0, tester);
	test_it("ft_strncmp(\"a\", \"aa\", 10)", ft_strncmp("a", "aa", 10) < 0, tester);
	test_it("ft_strncmp(\"aab\", \"aaa\", 10)", ft_strncmp("aab", "aaa", 2) == 0, tester);

	test_end(tester);
}
