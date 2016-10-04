#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

void	test_ft_memdel(t_test_driver *driver)
{
	t_test	*tester;
	void	*s;

	tester = test_begin("ft_memdel", driver);

	s = malloc(10);
	ft_memdel(&s);
	test_it("should be set to NULL", s == NULL, tester);

	test_end(tester);
}
