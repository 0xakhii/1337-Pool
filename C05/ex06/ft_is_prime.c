/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:14:47 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/22 01:27:20 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb < 2)
		return (0);
	while (prime < nb)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%d\n", ft_is_prime(7));
// }