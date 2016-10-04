#include "libtest.h"

t_test	*test_begin(char *name, t_test_driver *driver)
{
	t_test	*test;

	test = (t_test*)malloc(sizeof(t_test));
	test->name = name;
	test->failed = FALSE;
	test->test_count = 0;
	test->fail_count = 0;
	test->driver = driver;
	printf(YEL "%s:" RESET "\n", name);
	return (test);
}
