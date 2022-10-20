/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cat <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:04:02 by cat               #+#    #+#             */
/*   Updated: 2022/09/18 14:33:59 by cat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < size - 1)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				c = tab[a];
				tab[a] = tab[b];
				tab[b] = c;
			}
			b++;
		}
		a++;
	}
}
/*
#include<stdio.h>
int main()
{
	int tab[7] = {7, 6, 3, 4, 2, 5};
	int i = 0;
	ft_sort_int_tab(tab, 6);
	while (i < 6)
		printf("%d\t", tab[i++]);
}
*/
