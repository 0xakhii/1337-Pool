/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:47:43 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/22 01:24:09 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 0)
		res *= nb * ft_recursive_factorial(nb - 1);
	if (nb < 0)
		return (0);
	return (res);
}
// #include<stdio.h>
// int main()
// {
// 	printf("%d\n", ft_recursive_factorial(15));
// }