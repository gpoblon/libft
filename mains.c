/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mains.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 22:47:49 by gpoblon           #+#    #+#             */
/*   Updated: 2016/09/29 00:12:48 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// strstr
int		main()
{
	char *s1 = "putain mais tu vas la tester oui";
	char *s2 = "\0";
	printf ("strstr > ||%s||\n ft_strstr > |%s|\n", strstr(s1, s2), ft_strstr(s1, s2));
}
// acav main for strstr
int		main(int ac, char **av)
{
	if (ac < 1 && ac > 2)
		return (0);
	printf ("strstr > ||%s||\n ft_strstr > |%s|\n", strstr(av[1], av[2]), ft_strstr(av[1], av[2]));
}


// acav main for strnstr
int		main(int ac, char **av)
{
	if (ac < 1 && ac > 2)
		return (0);
	printf ("ft_strnstr > |%s|\n", ft_strnstr(av[1], av[2], atoi(av[3])));
}
