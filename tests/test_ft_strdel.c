#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_strdel(t_test_driver *driver)
{
	t_test	*tester;
	char	*s;

	tester = test_begin("ft_strdel", driver);

	s = (char*)malloc(10);
	ft_strdel(&s);
	test_it("should be set to NULL", s == NULL, tester);

	test_end(tester);
}
