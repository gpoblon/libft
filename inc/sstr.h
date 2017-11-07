/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 18:00:56 by gpoblon           #+#    #+#             */
/*   Updated: 2017/11/07 15:56:45 by gwojda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SSTR_H
# define SSTR_H

int		ft_sstrchr(char **map, char *str);
void	ft_sstrcpy(char **dst, const char **src);
char	**ft_sstrdup(char **map);
char	**ft_sstradd(char **sstr, char *new);
char	*ft_sstrcat(char **sstr, char sep);
void	ft_sstrdel(char **sstr, int index);
void	ft_sstrfree(char **sstr);
char	**ft_sstrmerge(char **s1, char **s2);
void	ft_sstrprint_fd(int fd, char **list, char sep);
void	ft_sstrprint(char **list, char sep);
void	ft_sstrsort(char **list, int (*cmp)());
char	*ft_sstrstr(char **sstr, char *find);

#endif
