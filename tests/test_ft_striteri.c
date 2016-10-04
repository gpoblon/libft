#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	set(unsigned int i, char *c)
{
	*c = i;
}

void	test_ft_striteri(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;
	size_t	i;

	tester = test_begin("ft_striteri", driver);

	s = malloc(sizeof(char) * 10);
	strcpy(s, "bonjoursj");
	ft_striteri(s, &set);
	i = 0;
	while (i < 9)
	{
		test_it("should correctly set the value", s[i] == i, tester);
		++i;
	}

	free(s);
	test_end(tester);
}
