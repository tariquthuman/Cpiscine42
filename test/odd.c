/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   odd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <kadmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:15:50 by kadmoham          #+#    #+#             */
/*   Updated: 2023/12/01 17:21:51 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	a;

	a = 49;
	while (a < 59)
	{
		write(1, &a, 1);
		a += 2;
	}
	write(1, "\n", 1);
	return (0);
}
