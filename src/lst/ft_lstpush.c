/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 15:59:39 by jhalford          #+#    #+#             */
/*   Updated: 2018/10/31 11:49:17 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

t_list	*ft_lstpush(t_list **stack, int elem)
{
	ft_lstadd(stack, ft_lstnew(&elem, sizeof(elem)));
	return (*stack);
}
