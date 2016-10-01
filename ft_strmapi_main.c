/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 09:56:18 by gpoblon           #+#    #+#             */
/*   Updated: 2016/10/01 11:18:34 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_test(unsigned int i, char c)
{
	c = '0' + i;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	unsigned int	i;

	new_s = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s || !f || !new_s)
		return (NULL);
	i = 0;
	while (s[i])
		new_s[i] = (f(i, s[i++]));
	return (new_s);
}

int		main()
{
	printf ("%s", ft_strmapi("Twtrhnyst", ft_test));
}
