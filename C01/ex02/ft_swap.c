/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cat <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:44:22 by cat               #+#    #+#             */
/*   Updated: 2022/08/26 23:12:10 by cat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include<stdio.h>
int main()
{
	int i = 2;
	int j = 5;
	printf("i value before swapping:%d\nj value befor swapping:%d\n\n", i, j);
	int *i2 = &i;
	int *j2 = &j;
	ft_swap(i2, j2);
	printf("i value after swapping is:%d\nj value after swapping is:%d", i, j);
}
*/
