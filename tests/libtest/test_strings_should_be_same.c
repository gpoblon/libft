#include "libtest.h"
#include "string.h"

void	test_strings_should_be_same(char *s1, char *s2, t_test *test)
{
	char	*s;
	char	success;
	size_t	i;

	++test->test_count;
	++test->driver->test_count;
	success = TRUE;
	i = 0;
	if (strlen(s1) != strlen(s2))
		success = FALSE;
	while (success && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			success = FALSE;
			break;
		}
		++i;
	}

	if (success)
		printf(GRN "\tstrings should be same OK" RESET "\n");
	else
	{
		printf(RED "\tstrings should be same FAIL" RESET "\n");
		test->failed = 1;
		test->driver->failed = 1;
		++test->fail_count;
		++test->driver->fail_count;
	}
}
