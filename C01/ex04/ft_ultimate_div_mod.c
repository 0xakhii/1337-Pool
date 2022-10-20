/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cat <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:45:44 by cat               #+#    #+#             */
/*   Updated: 2022/09/18 11:37:30 by cat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
#include<stdio.h>
int main()
{
	int i = 1;
	int j = 10;
	int *a = &i;
	int *b = &j;
	ft_ultimate_div_mod(a, b);
	printf("%d\n%d", i, j);
}
*/
