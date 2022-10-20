/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:03:35 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/20 22:07:39 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] < 31 || str[a] > 126)
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
// 	char str[] = "hello123 world!!";
// 	printf("is printable?: %d\n", ft_str_is_printable(str));
// }