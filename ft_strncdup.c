/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 12:59:34 by gpoblon           #+#    #+#             */
/*   Updated: 2016/12/07 15:25:30 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncdup(const char *src, size_t n, char c)
{
	char	*str_new;

	str_new = (char*)malloc(sizeof(char) * n + 1);
	CHECKPVN(str_new);
	str_new = ft_strncpy(str_new, src, n);
	str_new[n] = '\0';
	--n;
	while (n)
	{
		str_new[n] = c;
		--n;
	}
	return (str_new);
}
