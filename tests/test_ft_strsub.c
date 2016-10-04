#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strsub(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;

	tester = test_begin("ft_strsub", driver);

	s = ft_strsub("bonjour", 0, 3);
	test_arrays_should_be_same((void*)"bon", (void*)s, 4, tester);
	free(s);

	s = ft_strsub("bonjour", 4, 3);
	test_arrays_should_be_same((void*)"our", (void*)s, 4, tester);
	free(s);

	s = ft_strsub("bonjour", 2, 3);
	test_arrays_should_be_same((void*)"njo", (void*)s, 4, tester);
	free(s);

	test_end(tester);
}
