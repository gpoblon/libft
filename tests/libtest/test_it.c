#include "libtest.h"

void	test_it(char *name, int expr, t_test *test)
{
	char	*s;

	++test->test_count;
	++test->driver->test_count;
	if (expr)
		s = GRN "\t%s OK" RESET "\n";
	else
	{
		s = RED "\t%s FAIL" RESET "\n";
		test->failed = 1;
		test->driver->failed = 1;
		++test->fail_count;
		++test->driver->fail_count;
	}
	printf(s, name);
}
