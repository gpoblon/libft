/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 13:46:04 by gpoblon           #+#    #+#             */
/*   Updated: 2017/11/07 15:45:46 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*str_new;

	if (!(str_new = (char*)malloc(sizeof(char) * n + 1)))
		return (NULL);
	str_new = ft_strncpy(str_new, src, n);
	str_new[n] = '\0';
	return (str_new);
}
