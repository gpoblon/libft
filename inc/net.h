#ifndef NET_H
# define NET_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <netdb.h>
# include <netinet/in.h>
# include <arpa/inet.h>

int		create_server(int port, int backlog, char *protoname);
int		create_client(char *addr, int port, char *protoname);

#endif
