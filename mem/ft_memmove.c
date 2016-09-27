/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:09:26 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/23 18:22:11 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	**tmp;

	**tmp = '\0';
	ft_memcpy(*tmp, src, len);
	ft_memdel(src);
	ft_memcpy(dst, *tmp, len);
	ft_memdel(tmp);
	return (dst);
}
