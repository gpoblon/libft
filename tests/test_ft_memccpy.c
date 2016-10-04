#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_memccpy(t_test_driver *driver)
{
	char	*src;
	char	*dest;
	char	*ret;
	t_test	*tester;

	tester = test_begin("ft_memccpy", driver);

	src = "bonjour";
	dest = (char*)malloc(sizeof(char) * 8);

    bzero(dest, 8);
	ret = ft_memccpy(dest, src, 'z', 8);
	test_it("should return NULL", ret == NULL, tester);
	test_it("should have 7 chars", strlen(dest) == 7, tester);
	test_strings_should_be_same(dest, "bonjour", tester);

	ret = ft_memccpy(dest, src, 'j', 8);
	test_it("should return last byte + 1", ret == dest + 4, tester);
	test_arrays_should_be_same(dest, "bonj", 4, tester);

    free(dest);
	test_end(tester);
}
