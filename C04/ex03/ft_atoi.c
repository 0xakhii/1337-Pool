/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:47:28 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/22 01:21:37 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	ind;
	int	sign;
	int	res;

	ind = 0;
	sign = 1;
	res = 0;
	while (str[ind] == 32 || (str[ind] > 8 && str[ind] < 14))
		ind++;
	while (str[ind] == '-' || str[ind] == '+')
	{
		if (str[ind] == '-')
			sign = sign * -1;
		ind++;
	}
	while (str[ind] >= '0' && str[ind] <= '9')
	{
		res = res * 10;
		res = res + (str[ind] - '0');
		ind++;
	}
	res = res * sign;
	return (res);
}
// int main()
// {
//     char str[] = "-04as65-45654654";
//     printf("ft_a: %i\n", ft_atoi(str));
//     printf("atoi: %i\n", atoi(str));
// }