/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <kadmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:54:09 by kadmoham          #+#    #+#             */
/*   Updated: 2023/11/30 15:55:18 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb -1;
	if (nb > 1)
	{
		while (i > 1)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i--;
		}
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(47));
// 	return (0);
// }
