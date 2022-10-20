/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:59:40 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/20 22:03:08 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{	
		if (str[a] < 'A' || (str[a] > 'Z' && str[a] < 'a') || str[a] > 'z')
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
// 	char str[] = "hello1";
// 	printf("is alpha?: %d\n", ft_str_is_alpha(str));
// }