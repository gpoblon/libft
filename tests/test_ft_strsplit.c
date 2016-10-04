#include <string.h>

#include "../libft.h"
#include "libtest/libtest.h"

static void free_strsplit(char **s)
{
    size_t  i;

    i = 0;
    while (i == 0 || s[i - 1])
    {
        free(s[i]);
        ++i;
    }
    free(s);
}

/* I didn't free array here because fuck it. Thank you. */
void	test_ft_strsplit(t_test_driver *driver)
{
	t_test	*tester;
	char	**s;

	tester = test_begin("ft_strsplit", driver);

	s = ft_strsplit("bonjour", '*');
	test_it("array should have 1 element", s[1] == 0, tester);
	test_strings_should_be_same(s[0], "bonjour", tester);
    free_strsplit(s);

	s = ft_strsplit("*salut*les***etudiants*", '*');
	test_it("array should have 3 elements", s[3] == 0, tester);
	test_strings_should_be_same(s[0], "salut", tester);
	test_strings_should_be_same(s[1], "les", tester);
	test_strings_should_be_same(s[2], "etudiants", tester);
    free_strsplit(s);

	s = ft_strsplit("******", '*');
	test_it("array should have 0 elements", s[0] == 0, tester);
    free_strsplit(s);

	test_end(tester);
}
