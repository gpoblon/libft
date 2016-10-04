#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

char	cpy(char c)
{
	return (c);
}

void	test_ft_strmap(t_test_driver *driver)
{
	t_test	*tester;
	char	*s1;
	char	*s2;

	tester = test_begin("ft_strmap", driver);

	s1 = malloc(sizeof(char) * 10);
	strcpy(s1, "bonjoursj");
	s2 = ft_strmap(s1, &cpy);
	test_arrays_should_be_same(s1, s2, 9, tester);

	free(s1);
	free(s2);
	test_end(tester);
}
