#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strjoin(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;

	tester = test_begin("ft_strjoin", driver);

	s = ft_strjoin("bonjour", " je suis ton pere");
	test_strings_should_be_same(s, "bonjour je suis ton pere", tester);
	free(s);

	s = ft_strjoin("", "bonjour");
	test_strings_should_be_same(s, "bonjour", tester);
	free(s);

	s = ft_strjoin("bonjour", "");
	test_strings_should_be_same(s, "bonjour", tester);
	free(s);

	test_end(tester);
}
