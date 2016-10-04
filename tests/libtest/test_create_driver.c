#include "libtest.h"

t_test_driver	*test_create_driver(char *name)
{
	t_test_driver	*driver;

	driver = (t_test_driver*)malloc(sizeof(t_test_driver));
	driver->name = name;
	driver->failed = FALSE;
	driver->test_count = 0;
	driver->fail_count = 0;
	printf(BLU "Beginning tests for %s." RESET "\n", name);
	return (driver);
}
