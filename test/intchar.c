/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:24:08 by kadmoham          #+#    #+#             */
/*   Updated: 2023/11/24 19:26:34 by kadmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int  main()
{
        char a;

        a = 49;
        while (a <=57)
        {
                printf("%c", a);
                ++a;
        }
return (0);
}
