/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:21:16 by ojamal            #+#    #+#             */
/*   Updated: 2022/08/04 22:46:59 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	print_params(char **av, int ac)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		s;
	int		c;
	char	*swp;

	s = 1;
	while (s < argc - 1)
	{
		c = s + 1;
		while (c < argc)
		{
			if (ft_strcmp(argv[c], argv[s]) < 0)
			{
				swp = argv[s];
				argv[s] = argv[c];
				argv[c] = swp;
			}
			c++;
		}
		s++;
	}
	print_params(argv, argc);
	return (0);
}
