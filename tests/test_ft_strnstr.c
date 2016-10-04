#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strnstr(t_test_driver *driver)
{
	char	*big;
	char	*ret;
	t_test	*tester;

	tester = test_begin("ft_strnstr", driver);

	big = "Bonjourokok";
	ret = ft_strnstr(big, "jour", 10);
	test_it("ft_strnstr(\"Bonjour\", \"jour\", 10)", ret == big + 3, tester);

	ret = ft_strnstr(big, "", 10);
	test_it("ft_strnstr(\"Bonjour\", \"\"), 10)", ret == big, tester);

	ret = ft_strnstr(big, "nope", 10);
	test_it("ft_strnstr(\"Bonjour\", \"nope\", 10)", ret == NULL, tester);

	ret = ft_strnstr(big, "jourHAHAHA", 4);
	test_it("ft_strnstr(\"Bonjour\", \"jourHAHAHA\", 4)", ret == big + 3, tester);

	test_end(tester);
}
