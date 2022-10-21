/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:34:48 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/21 21:56:20 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2 [a] && a < n - 1)
	{
		a++;
	}	
	return (s1[a] - s2[a]);
}

// #include<stdio.h>
// int main()
// {
// 	char str[] = "hellO";
// 	char str1[] = "hello";
// 	printf("ncmp is : %d\n", ft_strncmp(str, str1, 5));
// }