/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <kadmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:56:52 by kadmoham          #+#    #+#             */
/*   Updated: 2023/11/30 17:35:58 by kadmoham         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb + 1))
	{
		nb++;
	}
	return (nb + 1);
}

// int	main(void)
// {
// 	printf ("%d\n", ft_find_next_prime(8));
// }
