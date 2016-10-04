#include "libtest.h"

void	test_ok(char *name, t_test *test)
{
	test_it(name, 1, test);
}
