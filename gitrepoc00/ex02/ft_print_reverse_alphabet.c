/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <kadmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:53:45 by kadmoham          #+#    #+#             */
/*   Updated: 2023/12/02 12:18:43 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	f;

	f = 122;
	while (f >= 97)
	{
		write(1, &f, 1);
		f--;
	}
}

int main(void)
{
	char newline = '\n';

	ft_print_reverse_alphabet();
	write (1, &newline, 1);
	return(0);
}
