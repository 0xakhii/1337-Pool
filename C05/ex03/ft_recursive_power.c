/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:03:00 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/22 01:25:13 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power > 0)
		res *= nb * ft_recursive_power(nb, (power - 1));
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%d\n", ft_recursive_power(5, 5));
// }