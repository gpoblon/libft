/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_content.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 15:25:33 by gpoblon           #+#    #+#             */
/*   Updated: 2018/10/31 11:49:12 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

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
