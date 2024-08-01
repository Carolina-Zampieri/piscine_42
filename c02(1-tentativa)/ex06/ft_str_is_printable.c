/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazampie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:49:48 by cazampie          #+#    #+#             */
/*   Updated: 2024/07/24 12:55:19 by cazampie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char    x[] = "Ca <3";
        char    y[] = "";
        char    z[] = "Olá, \a Como você \n está?\0";

        printf("%s %d\n", x, ft_str_is_printable(x));
        printf("%s %d\n", y, ft_str_is_printable(y));
        printf("%s %d\n", z, ft_str_is_printable(z));
        return (0);
}*/
