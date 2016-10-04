#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strcpy(t_test_driver *driver)
{
	char	*src;
	char	*dest;
	char	*ret;
	t_test	*tester;

	tester = test_begin("ft_strcpy", driver);

	src = "000bonjour\0bonjour";
	dest = (char*)malloc(sizeof(char) * 19);
	bzero(dest, 19);

	ret = ft_strcpy(dest, src);
	test_it("should return dest", ret == dest, tester);
	test_it("should have 10 chars", strlen(dest) == 10, tester);
	test_arrays_should_be_same(dest, src, 10, tester);
	test_array_equal(dest + 10, 0, 9, tester);

    free(dest);
	test_end(tester);
}
