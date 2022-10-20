/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:34:52 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/20 22:08:18 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	b;
	int	c;

	b = 0;
	c = 1;
	ft_strlowcase(str);
	while (str[b])
	{
		if (str[b] >= 'a' && str[b] <= 'z')
		{
			if (c == 1)
			{
				str[b] -= 32;
				c = 0;
			}
		}
		else if (str[b] >= '0' && str[b] <= '9')
			c = 0;
		else
			c = 1;
		b++;
	}
	return (str);
}

// #include<stdio.h>
// int main()
// {
// 	char str[] = "hello, this is 1337school";
// 	printf("strcapitalize: %s\n", ft_strcapitalize(str));
// }