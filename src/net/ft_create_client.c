/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_client.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:27:55 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/31 12:11:30 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "net.h"
#include "mem.h"

int				ft_create_tcpclient(char *host, char *port)
{
	struct addrinfo		*a;
	struct addrinfo		*tmp;
	struct addrinfo		hints;
	int					sock;

	ft_memset(&hints, 0, sizeof(hints));
	hints.ai_family = PF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	if (getaddrinfo(host, port, &hints, &a) != 0)
		return (-1);
	tmp = a;
	while (a)
	{
		if ((sock = socket(a->ai_family, a->ai_socktype, a->ai_protocol)) < 0)
			return (-1);
		if (connect(sock, a->ai_addr, a->ai_addrlen) == 0)
			break ;
		close(sock);
		sock = -1;
		a = a->ai_next;
	}
	freeaddrinfo(tmp);
	return (sock);
}
