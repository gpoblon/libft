/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 13:46:04 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 14:59:09 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*str_new;

	str_new = (char*)malloc(sizeof(char) * n + 1);
	CHECKPVN(str_new);
	str_new = ft_strncpy(str_new, src, n);
	str_new[n] = '\0';
	return (str_new);
}
