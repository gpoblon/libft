#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"
#include "stdio.h"
void	test_ft_strstr(t_test_driver *driver)
{
	char	*big;
	char	*ret;
	t_test	*tester;

	tester = test_begin("ft_strstr", driver);

	big = "Bonjour";
	ret = ft_strstr(big, "jour");
	test_it("ft_strstr(\"Bonjour\", \"jour\")", ret == big + 3, tester);

	ret = ft_strstr(big, "");
	test_it("ft_strstr(\"Bonjour\", \"\")", ret == big, tester);

	ret = ft_strstr(big, "nope");
	test_it("ft_strstr(\"Bonjour\", \"nope\")", ret == NULL, tester);

	test_it("ft_strstr(\"\", \"\")", ft_strstr("", "") == strstr("", ""), tester);

	test_end(tester);
}
