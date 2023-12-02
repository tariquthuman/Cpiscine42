/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:58:29 by kadmoham          #+#    #+#             */
/*   Updated: 2023/11/23 14:58:31 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ('z' - 'Z');
		}
		++i;
	}
	return (str);
}
/*int	main()
{
	char	str[50] = "HELLO WORLD";
	char	*result;

	result = ft_strlowcase(str);
	printf("%s\n", result);
	return (0);
}*/
