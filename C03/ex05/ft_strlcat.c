/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:00:27 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/21 21:56:04 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

unsigned int	ft_strlcat( char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	lenght;
	unsigned int	c;
	unsigned int	d;

	a = 0;
	lenght = 0;
	d = 0;
	while (dest[lenght])
		lenght++;
	c = lenght;
	while (src[a])
		a++;
	if (c >= size)
		return (a + size);
	while (src[d] && lenght + 1 < size)
	{
		dest[lenght] = src[d];
		d++;
		lenght++;
	}
	dest[lenght] = 0;
	return (a + c);
}
// #include<stdio.h>
// int main()
// {
// 	char str[] = "hello";
// 	char str1[] = " world";
// 	printf("str lenght is : %d\n", ft_strlcat(str, str1, 16));
// }