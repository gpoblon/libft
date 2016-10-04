#include "atests.h"
// GAETAN
int		main(void)
{
	t_test_driver	*driver;
	char			failed;

	driver = test_create_driver("libft");

	test_ft_atoi(driver);
	test_ft_bzero(driver);

	test_ft_isalnum(driver);
	test_ft_isalpha(driver);
	test_ft_isascii(driver);
	test_ft_isdigit(driver);
	test_ft_islower(driver);
	test_ft_isupper(driver);
	test_ft_isprint(driver);
	test_ft_ispunct(driver);
	test_ft_isspace(driver);

	test_ft_strchr(driver);
	test_ft_strrchr(driver);
	test_ft_strcmp(driver);
	test_ft_strncmp(driver);
	test_ft_strcpy(driver);
	test_ft_strncpy(driver);
	test_ft_strdup(driver);
	test_ft_strcat(driver);
	test_ft_strncat(driver);
	test_ft_strlcat(driver);
	test_ft_strlen(driver);
	test_ft_strstr(driver);
	test_ft_strnstr(driver);

	test_ft_memcpy(driver);
	test_ft_memccpy(driver);
	test_ft_memchr(driver);
	test_ft_memcmp(driver);
	test_ft_memmove(driver);
	test_ft_memset(driver);

	test_ft_tolower(driver);
	test_ft_toupper(driver);

	test_ft_memalloc(driver);
	test_ft_memdel(driver);
	test_ft_strnew(driver);
	test_ft_strdel(driver);
	test_ft_strclr(driver);
	test_ft_striter(driver);
	test_ft_striteri(driver);
	test_ft_strmap(driver);
	test_ft_strmapi(driver);
	test_ft_strequ(driver);
	test_ft_strnequ(driver);
	test_ft_strsub(driver);
	test_ft_strjoin(driver);
	test_ft_strtrim(driver);
	test_ft_strsplit(driver);
	test_ft_itoa(driver);

	// test_ft_lstnew(driver);
	// test_ft_lstdelone(driver);
	// test_ft_lstdel(driver);
	// test_ft_lstadd(driver);
	// test_ft_lstiter(driver);
	// test_ft_lstmap(driver);
	//
	// test_ft_pow(driver);
	// test_ft_sqrt(driver);

	failed = driver->failed;
	test_finish_driver(driver);
	return (failed);
}
