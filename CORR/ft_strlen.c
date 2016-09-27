/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 14:37:46 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/17 18:14:15 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t  ft_strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return(len);
}

int		main(int ac, char **av)
{
	if (ac < 1)
		return 1;
	else
		printf("%lu\n", ft_strlen(av[1]));
}
