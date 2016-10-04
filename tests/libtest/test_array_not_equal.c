#include "libtest.h"

void	test_array_not_equal(void *array, char element, size_t array_size, t_test *test)
{
	char	*s;
	char	success;
	size_t	i;

	++test->test_count;
	++test->driver->test_count;
	success = TRUE;
	i = 0;
	while (i < array_size)
	{
		if (((char*)array)[i++] == element)
		{
			success = FALSE;
			break;
		}
	}
	if (success)
		s = GRN "\tarray should not equal %d OK" RESET "\n";
	else
	{
		s = RED "\tarray should not equal %d FAIL" RESET "\n";
		test->failed = 1;
		test->driver->failed = 1;
		++test->fail_count;
		++test->driver->fail_count;
	}
	printf(s, element);
}
