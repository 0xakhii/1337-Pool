/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:57:11 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/20 22:07:53 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 'Z' || str[a] < 'A')
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
// 	char str[] = "hellO";
// 	printf("is uppercase?: %d\n", ft_str_is_uppercase(str));
// }