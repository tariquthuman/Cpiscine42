/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testpointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:10:25 by kadmoham          #+#    #+#             */
/*   Updated: 2023/12/02 13:11:53 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	main(void)
{
	int x = 5;      // Declare an integer x
	int *p;         // Declare a pointer p
	p = &x;         // Assign the address of x to p
	*p = 10;        // Change the value at the address p is pointing to
	printf("%d", x); // Prints "1
	return (0);
}
