#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strlcat(t_test_driver *driver)
{
	char	*dest;
	size_t	ret;
	t_test	*tester;

	tester = test_begin("ft_strlcat", driver);

	dest = (char*)malloc(sizeof(char) * 10);
	bzero(dest, 10);

	ret = ft_strlcat(dest, "Bonjour", 10);
	test_strings_should_be_same(dest, "Bonjour", tester);
	test_it("should be null-terminated", dest[7] == '\0', tester);
	test_it("should return 7", ret == 7, tester);
	ret = ft_strlcat(dest, " je suis 42", 10);
	test_strings_should_be_same(dest, "Bonjour j", tester);
	test_it("should be null-terminated", dest[9] == '\0', tester);
	test_it("should return 18", ret == 18, tester);

	free(dest);
	test_end(tester);
}
