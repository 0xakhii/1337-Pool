/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:54:42 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/08/02 23:35:07 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if (i == 1 || j == 1 || i == y || j == x)
			{
				if (i == 1 && j == 1)
					ft_putchar('/');
				else if (i == y && j == x && j != 1 && i != 1)
					ft_putchar('/');
				else if ((i == y && j == 1) || (i == 1 && j == x))
					ft_putchar('\\');
				else
					ft_putchar('*');
			}
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
