/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_server.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:28:04 by gwojda            #+#    #+#             */
/*   Updated: 2018/10/30 13:38:45 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "net.h"

int		ft_create_server(int port, int backlog, char *protoname)
{
	int					sock;
	struct protoent		*proto;
	struct sockaddr_in6	sin;

	if (!(proto = getprotobyname(protoname)))
		return (-1);
	sock = socket(PF_INET6, SOCK_STREAM, proto->p_proto);
	sin.sin6_family = AF_INET6;
	sin.sin6_port = htons(port);
	sin.sin6_scope_id = 0;
	sin.sin6_addr = in6addr_any;
	if (bind(sock, (const struct sockaddr *)&sin, sizeof(sin)) < 0)
		return (-1);
	listen(sock, backlog);
	return (sock);
}
