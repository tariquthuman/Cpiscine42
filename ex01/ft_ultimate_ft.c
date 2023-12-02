/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <kadmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:14:53 by kadmoham          #+#    #+#             */
/*   Updated: 2023/12/02 17:46:06 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********abc)
{
	*********abc = 42;
}

int main()
{
	int abc = 0;
	int *abc1, **abc2, ***abc3, ****abc4,
	 *****abc5, ******abc6, *******abc7, ********abc8, *********abc9;
	abc1 = &abc;
	abc2 = &abc1;
	abc3 = &abc2;
	abc4 = &abc3;
	abc5 = &abc4;
	abc6 = &abc5;
	abc7 = &abc6;
	abc8 = &abc7;
	abc9 = &abc8;
	ft_ultimate_ft(abc9);
	printf("%d", abc);
	return 0;
}
