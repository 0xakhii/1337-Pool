/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:50:39 by ojamal            #+#    #+#             */
/*   Updated: 2022/08/04 22:51:57 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	a;

	a = argc - 1;
	while (a > 0)
	{
		ft_putstr (argv[a]);
		write(1, "\n", 1);
		a--;
	}
	return (0);
}
