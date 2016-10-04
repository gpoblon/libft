#include "libtest.h"

void	test_arrays_should_be_same(char *array1, char *array2, size_t array_size, t_test *test)
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
		if (array1[i] != array2[i])
		{
			success = FALSE;
			break;
		}
		++i;
	}
	if (success)
		s = GRN "\tarrays should be same OK" RESET "\n";
	else
	{
		s = RED "\tarrays should be same FAIL" RESET "\n";
		test->failed = 1;
		test->driver->failed = 1;
		++test->fail_count;
		++test->driver->fail_count;
	}
	printf(s, array_size);
}
