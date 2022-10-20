/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cat <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:00:55 by cat               #+#    #+#             */
/*   Updated: 2022/08/26 20:19:48 by cat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	last;

	last = 'z';
	while (last >= 'a')
	{
		ft_putchar(last);
		last--;
	}
}
/*
int	main()
{
	ft_print_reverse_alphabet();
}
*/
