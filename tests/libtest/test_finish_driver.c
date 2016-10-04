#include "libtest.h"

void	test_finish_driver(t_test_driver *driver)
{
	char	*s;

	if (driver->failed)
		s = RED "Tests of %s failed. (%d success, %d fail)" RESET "\n";
	else
		s = BLU "Tests of %s are a success! (%d tests)" RESET "\n";
	printf(s, driver->name, driver->test_count - driver->fail_count, driver->fail_count);
	free(driver);
}
