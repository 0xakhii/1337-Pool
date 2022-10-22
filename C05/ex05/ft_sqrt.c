/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:08:34 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/22 01:26:36 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	sqr = 0;
	while (sqr <= nb / 2)
	{
		if (sqr * sqr == nb)
			return (sqr);
		else if (sqr * sqr > nb)
			break ;
		sqr++;
	}
	return (0);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%d\n", ft_sqrt(25));
// }