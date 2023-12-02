/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tes.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <kadmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:47:27 by kadmoham          #+#    #+#             */
/*   Updated: 2023/12/02 14:00:12 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int)
{
	int	a;
	int	*p;

	a = 5;
	p = &a;
	printf("value of p is %p\n", p);
	printf("value of &a is %p\n", &a);
	printf("value of &p is %p\n", &p);
	printf("value of *p is %d\n", *p);
	return (0);
}
