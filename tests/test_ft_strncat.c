#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strncat(t_test_driver *driver)
{
	char	*dest;
	char	*ret;
	t_test	*tester;

	tester = test_begin("ft_strncat", driver);

	dest = (char*)malloc(sizeof(char) * 10);

	bzero(dest, 10);
	ret = ft_strncat(dest, "Bonjour", 9);
	test_strings_should_be_same(dest, "Bonjour", tester);
	test_it("should be null-terminated", dest[7] == '\0', tester);
	test_it("should return dest", ret == dest, tester);

	bzero(dest, 10);
	ret = ft_strncat(dest, "je suis 42", 5);
	test_strings_should_be_same(dest, "je su", tester);
	test_it("should be null-terminated", dest[5] == '\0', tester);
	test_it("should return dest", ret == dest, tester);

	free(dest);
	test_end(tester);
}
