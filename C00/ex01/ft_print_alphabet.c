/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cat <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:52:33 by cat               #+#    #+#             */
/*   Updated: 2022/08/26 20:17:59 by cat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	first;

	first = 'a';
	while (first <= 'z')
	{
		ft_putchar(first);
		first++;
	}
}
/*
int	main()
{
	ft_print_alphabet();
}
*/
