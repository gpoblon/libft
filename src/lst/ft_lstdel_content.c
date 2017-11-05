/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_content.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 15:25:33 by gpoblon           #+#    #+#             */
/*   Updated: 2017/02/27 15:28:54 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_content(void *content, size_t content_size)
{
	(void)content_size;
	if (content)
	{
		free(content);
		content = NULL;
	}
	content_size = 0;
}
