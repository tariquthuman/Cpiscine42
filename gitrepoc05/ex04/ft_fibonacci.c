/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <kadmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:36:37 by kadmoham          #+#    #+#             */
/*   Updated: 2023/11/29 19:00:13 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index > 1)
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
	return (index);
}

// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(6));
// 	return (0);
// }
