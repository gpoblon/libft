/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:27:34 by gpoblon           #+#    #+#             */
/*   Updated: 2019/04/11 15:11:03 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

static void	swap_addr(void *pta, void *ptb, unsigned int size)
{
	char	tmp[size];

	ft_memcpy(tmp, pta, size);
	ft_memcpy(pta, ptb, size);
	ft_memcpy(ptb, tmp, size);
}

static void	qsort_impl(t_qsort_meta *m, int left, int right, int (*cmp)())
{
	int	i;
	int	mid;
	int	last;

	if (left >= right)
		return ;
	mid = (left / m->size + right / m->size) / 2 * m->size;
	last = left;
	i = left + m->size;
	swap_addr((char*)(m->v + left), (char*)(m->v + mid), m->size);
	while (i <= right)
	{
		if ((*cmp)((char*)(m->v + left), (char*)(m->v + i)) > 0)
		{
			last += m->size;
			swap_addr((char*)(m->v + i), (char*)(m->v + last), m->size);
		}
		i += m->size;
	}
	swap_addr((char*)(m->v + left), (char*)(m->v + last), m->size);
	qsort_impl(m, left, last - m->size, cmp);
	qsort_impl(m, last + m->size, right, cmp);
}

void		ft_qsort(void *arr, unsigned int size, unsigned int len,
	int (*cmp)())
{
	t_qsort_meta	metadata;

	metadata.size = size;
	metadata.len = len;
	metadata.v = arr;
	if (len > 0)
		qsort_impl(&metadata, 0, (len - 1) * size, cmp);
}
