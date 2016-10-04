#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strcat(t_test_driver *driver)
{
	char	*dest;
	char	*ret;
	t_test	*tester;

	tester = test_begin("ft_strcat", driver);

	dest = (char*)malloc(sizeof(char) * 20);
	bzero(dest, 20);

	ret = ft_strcat(dest, "Bonjour");
	test_arrays_should_be_same(dest, "Bonjour", 7, tester);
	test_it("should return dest", dest == ret, tester);
	test_it("should be null-terminated", dest[7] == '\0', tester);
	ft_strcat(dest, " je suis 42");
	test_arrays_should_be_same(dest, "Bonjour je suis 42", 18, tester);
	test_it("should be null-terminated", dest[18] == '\0', tester);

	free(dest);
	test_end(tester);
}
