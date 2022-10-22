/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:44:54 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/22 01:23:44 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (res);
}
// #include<stdio.h>
// int main()
// {
// 	printf("%d\n", ft_iterative_factorial(15));
// }