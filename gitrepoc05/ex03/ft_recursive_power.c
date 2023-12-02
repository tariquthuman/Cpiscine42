/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <kadmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:20:25 by kadmoham          #+#    #+#             */
/*   Updated: 2023/11/29 15:34:07 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 0)
	{
		res = nb * ft_recursive_power(nb, power - 1);
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(4, 2));
// 	return (0);
// }
