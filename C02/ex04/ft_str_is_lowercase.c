/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:45:49 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/20 22:07:46 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 'z' || str[a] < 'a')
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
// 	char str[] = "hello";
// 	printf("is lowercase?: %d\n", ft_str_is_lowercase(str));
// }