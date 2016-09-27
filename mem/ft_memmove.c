/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:09:26 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/27 12:04:02 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	ft_memcpy(*tmp, src, len);
	ft_memcpy(dst, *tmp, len);
	return (dst);
}
