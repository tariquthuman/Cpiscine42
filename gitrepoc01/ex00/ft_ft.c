/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <kadmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:21:50 by kadmoham          #+#    #+#             */
/*   Updated: 2023/12/02 13:00:54 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *abc)
{
	*abc = 42;
}

int	main(void)
{
	int	abc = 0;
	ft_ft(&abc);
	printf("%d", abc);
	return 0;
}

