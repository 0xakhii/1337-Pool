/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:38:58 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/20 21:57:29 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

// #include<stdio.h>
// int	main()
// {
// 	char src[] = "hello";
// 	char dst[6];
// 	printf("dst: %s\n", ft_strcpy(dst, src)); 
// 	return 0;
// }