#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_memmove(t_test_driver *driver)
{
	char	*src;
	char	*dest;
	char	*ret;
	t_test	*tester;

	tester = test_begin("ft_memmove", driver);

	src = "bonjour";
	dest = (char*)malloc(sizeof(char) * 10);

	ret = ft_memmove(dest, src, 8);
	test_it("should return dest", ret == dest, tester);
	test_it("should have 7 chars", strlen(dest) == 7, tester);
	test_strings_should_be_same(dest, "bonjour", tester);

	ret = ft_memmove(dest + 2, dest, 8);
	test_it("should return dest + 2", ret == dest + 2, tester);
	test_it("should have 7 chars", strlen(dest + 2) == 7, tester);
	test_strings_should_be_same(dest + 2, "bonjour", tester);
	test_arrays_should_be_same(dest, "bo", 2, tester);

	free(dest);
	test_end(tester);
}
