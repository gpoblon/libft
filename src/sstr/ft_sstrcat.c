/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:48:53 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 11:51:30 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sstr.h"

char	*ft_sstrcat(char **sstr, char sep)
{
	int		len;
	int		i;
	char	*out;

	i = 0;
	len = 0;
	if (!sstr)
		return (NULL);
	while (sstr[i])
		len += ft_strlen(sstr[i++]);
	if (!(out = ft_strnew(sizeof(char) * (len + i + 1))))
		return (NULL);
	ft_strcpy(out, sstr[0]);
	i = 1;
	while (sstr[i])
	{
		ft_strcat(out, (char[]){sep, 0});
		ft_strcat(out, sstr[i++]);
	}
	return (out);
}
