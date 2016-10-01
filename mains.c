/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mains.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 22:47:49 by gpoblon           #+#    #+#             */
/*   Updated: 2016/10/01 16:40:16 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// strrchr
int		main(int ac, char **av)
{
	if (ac < 1 || ac > 3)
		return (0);
	printf ("ft_strrchr > |%s|\n, strrchr |%s|\n", ft_strrchr(av[1], atoi(av[2])), strrchr(av[1], atoi(av[2])));
}

// strstr
int		main(int ac, char **av)
{
	if (ac < 1 || ac > 3)
		return (0);
	printf ("strstr > ||%s||\n ft_strstr > |%s|\n", strstr(av[1], av[2]), ft_strstr(av[1], av[2]));
}

// strnstr
int		main(int ac, char **av)
{
	if (ac < 1 || ac > 3)
		return (0);
	printf ("ft_strnstr > |%s|\n", ft_strnstr(av[1], av[2], atoi(av[3])));
}

// strcmp
int		main(int ac, char **av)
{
	if (ac < 1 || ac > 2)
		return (0);
	printf ("strcmp > ||%d||\n ft_strcmp > |%d|\n", strcmp(av[1], av[2]), ft_strcmp(av[1], av[2]));
}

// strncmp
int		main(int ac, char **av)
{
	if (ac < 1 || ac > 3)
		return (0);
	printf ("strncmp > ||%d||\nft_strncmp > |%d|\n", strncmp(av[1], av[2], atoi(av[3])), ft_strncmp(av[1], av[2], atoi(av[3])));
}

// strnew
int		main(int ac, char **av)
{
	if (ac < 1 || ac > 2)
		return (0);
	ft_strnew(atoi(av[1]));
}

//
