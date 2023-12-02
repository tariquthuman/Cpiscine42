/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <kadmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:53:04 by kadmoham          #+#    #+#             */
/*   Updated: 2023/12/01 17:14:14 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	f;

	f = 97;
	while (f <= 122)
	{
		write(1, &f, 1);
		f++;
	}
}

int main(void)
{
	char newline = '\n';

	ft_print_alphabet();
	write (1, &newline, 1);
	return(0);
}
