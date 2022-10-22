/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:25:17 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/22 01:20:42 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9 && nb >= 0)
		ft_putchar(nb + '0');
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}
/*
int	main()
{
      ft_putnbr(42);
}
*/
