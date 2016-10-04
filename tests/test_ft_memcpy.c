#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_memcpy(t_test_driver *driver)
{
	char	*src;
	char	*dest;
	char	*ret;
	t_test	*tester;

	tester = test_begin("ft_memcpy", driver);

	src = "bonjour";
	dest = (char*)malloc(sizeof(char) * 8);

	ret = ft_memcpy(dest, src, 8);
	test_it("should return dest", ret == dest, tester);
	test_it("should have 7 chars", strlen(dest) == 7, tester);
	test_strings_should_be_same(dest, "bonjour", tester);

	free(dest);
	test_end(tester);
}
