#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strclr(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;

	tester = test_begin("ft_strclr", driver);

	s = (char*)malloc(10);
	strcpy(s, "abcdfghjk");
	ft_strclr(s);
	test_array_equal((void*)s, 0, 10, tester);
	memset((void*)s, 1, 10);
	s[9] = 0;
	ft_strclr(s);
	test_array_equal((void*)s, 0, 10, tester);

	free(s);
	test_end(tester);
}
