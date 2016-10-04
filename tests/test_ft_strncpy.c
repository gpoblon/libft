#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strncpy(t_test_driver *driver)
{
	char	*dest;
	char	*ret;
	t_test	*tester;

	tester = test_begin("ft_strncpy", driver);

	dest = (char*)malloc(sizeof(char) * 20);
	bzero(dest, 20);

	ret = ft_strncpy(dest, "000bonjour\0bonjour", 20);
	test_it("should return dest", ret == dest, tester);
	test_it("should have 10 chars", strlen(dest) == 10, tester);
	test_it("should be null-terminated", dest[10] == '\0', tester);
	test_strings_should_be_same(dest, "000bonjour", tester);
	test_array_equal(dest + 10, 0, 10, tester);

	dest[14] = 1;
	dest[13] = 1;
	dest[15] = 1;

	ret = ft_strncpy(dest, "aa", 20);
	test_it("should return dest", ret == dest, tester);
	test_it("should have 12 chars", strlen(dest) == 2, tester);
	test_it("should be null-terminated", dest[2] == '\0', tester);
	test_strings_should_be_same(dest, "aa", tester);
	test_array_equal(dest + 2, 0, 18, tester);

    free(dest);
	test_end(tester);
}
