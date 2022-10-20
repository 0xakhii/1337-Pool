/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cat <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:04:28 by cat               #+#    #+#             */
/*   Updated: 2022/08/26 20:36:37 by cat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	first;

	first = '0';
	while (first <= '9')
	{
		ft_putchar(first);
		first++;
	}
}
/*
int	main()
{
	ft_print_numbers();
}
*/
