/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cat <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:07:17 by cat               #+#    #+#             */
/*   Updated: 2022/09/18 13:47:06 by cat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	counter;

	counter = 0;
	size = size - 1;
	while (counter <= size)
	{
		tmp = tab[size];
		tab[size] = tab[counter];
		tab[counter] = tmp;
		counter++;
		size--;
	}
}
/*
#include<stdio.h>
int main()
{
	int tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(&tab[0], 9);
	int a = 0;
	while (a < 9)
	{
		printf("%d ",tab[a]);
		a++;
	}
}
*/
