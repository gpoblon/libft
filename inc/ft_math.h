/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 18:02:41 by gpoblon           #+#    #+#             */
/*   Updated: 2019/04/11 15:31:28 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <math.h>
# include "mem.h"

# define PI 3.141592


typedef struct	        s_qsort_metadata
{
    unsigned int        size;
    unsigned int        len;
    void                *v;
}				        t_qsort_meta;

unsigned long long		ft_pow(unsigned long long n, unsigned long long power);
float					ft_deg_to_rad(float deg);
void					ft_qsort(void *arr, unsigned int size,
						unsigned int len, int (*cmp)());
void					ft_insert_sort(void *arr, unsigned int size,
						unsigned int len, int (*cmp)());

#endif
