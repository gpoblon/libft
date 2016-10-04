#ifndef LIBTEST_H
# define LIBTEST_H

# include "stdlib.h"
# include "stdio.h"

# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"

# define TRUE 1
# define FALSE 0

typedef struct	s_test_driver
{
	char	*name;
	char	failed;
	int		test_count;
	int		fail_count;
}				t_test_driver;

typedef struct	s_test
{
	char			*name;
	char			failed;
	int				test_count;
	int				fail_count;
	t_test_driver	*driver;
}				t_test;

t_test_driver	*test_create_driver(char *name);
void			test_finish_driver(t_test_driver *driver);

t_test			*test_begin(char *name, t_test_driver *driver);
void			test_end(t_test *test);
void			test_ok(char *name, t_test *test);
void			test_it(char *name, int expr, t_test *test);
void			test_array_equal(void *array, char element, size_t array_size, t_test *test);
void			test_array_not_equal(void *array, char element, size_t array_size, t_test *test);
void			test_arrays_should_be_same(char *array1, char *array2, size_t array_size, t_test *test);
void			test_strings_should_be_same(char *s1, char *s2, t_test *test);

#endif
