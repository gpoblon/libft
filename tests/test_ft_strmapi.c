#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

char	cpy_i(unsigned int i, char c)
{
	return (char)(i);
}

void	test_ft_strmapi(t_test_driver *driver)
{
	t_test	*tester;
	char	*s1;
	char	*s2;
	size_t	i;

	tester = test_begin("ft_strmapi", driver);

	s1 = malloc(sizeof(char) * 10);
	strcpy(s1, "012345678");
	s2 = ft_strmapi(s1, &cpy_i);
	i = 0;
	while (i < 9)
	{
		test_it("should be equal to i", s2[i] == i, tester);
		++i;
	}

	free(s1);
	free(s2);
	test_end(tester);
}
