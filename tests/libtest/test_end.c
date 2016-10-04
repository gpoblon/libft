#include "libtest.h"

void	test_end(t_test *test)
{
	char	*s;

	if (test->failed)
		s = RED "Tests of %s failed. (%d success, %d fail)" RESET "\n\n";
	else
		s = GRN "Tests of %s are a success! (%d tests)" RESET "\n\n";
	printf(s, test->name, test->test_count - test->fail_count, test->fail_count);
	free(test);
}
