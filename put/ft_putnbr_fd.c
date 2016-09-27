/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:03:44 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/18 20:14:35 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    ft_putchar_fd(char c, int fd);
void	ft_putnbr(int n);

void	ft_putnbr_fd(int n, int fd)
{
	long int nb;

	nb = n;
	if (nb < 0)
	{
        ft_putchar_fd('-', fd);
		nb = nb * -1;
	}
	if (nb >= 10)
        ft_putnbr_fd((nb / 10), fd);
    ft_putchar_fd(((nb % 10) + '0'), fd);
}
