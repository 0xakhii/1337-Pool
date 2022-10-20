/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:52:23 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/20 22:04:08 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > '9' || str[a] < '0')
		{
			return (0);
		}
	a++;
	}
	return (1);
}

// #include<stdio.h>
// int main()
// {
// 	char str[] = "1234a";
// 	printf("is num?: %d\n", ft_str_is_numeric(str));
// }