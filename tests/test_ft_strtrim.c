#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strtrim(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;

	tester = test_begin("ft_strtrim", driver);

	s = ft_strtrim("bonjour");
	test_strings_should_be_same(s, "bonjour", tester);
	free(s);

	s = ft_strtrim("bonjour \n\t  \n\t\t\t\n  ");
	test_strings_should_be_same(s, "bonjour", tester);
	free(s);

	s = ft_strtrim("\n\t  \t\n  bonjour");
	test_strings_should_be_same(s, "bonjour", tester);
	free(s);

	s = ft_strtrim("\n\n  \t\t  bonjour \n\t haha \n \t\t  ");
	test_strings_should_be_same(s, "bonjour \n\t haha", tester);
    free(s);

	test_end(tester);
}
