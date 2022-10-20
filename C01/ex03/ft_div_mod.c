/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cat <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:07:12 by cat               #+#    #+#             */
/*   Updated: 2022/09/18 10:33:47 by cat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 2;
	int div = 0;
	int mod = 0;
	int *dv = &div;
	int *md = &mod;
	ft_div_mod(a, b, dv, md);
	printf("div :%d\n", div);
	printf("mod :%d", mod);
}
*/
