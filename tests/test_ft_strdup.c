#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strdup(t_test_driver *driver)
{
	char	*src;
	char	*dest;
	char	*ret;
	t_test	*tester;

	tester = test_begin("ft_strdup", driver);

	src = "Bonjour";
	dest = ft_strdup(src);
	test_arrays_should_be_same(dest, src, strlen(src), tester);
	test_it("should be null-terminated", dest[strlen(src)] == '\0', tester);
	free(dest);

	src = "";
	dest = ft_strdup(src);
	test_arrays_should_be_same(dest, src, strlen(src), tester);
	test_it("should be null-terminated", dest[strlen(src)] == '\0', tester);
	free(dest);

	test_end(tester);
}
