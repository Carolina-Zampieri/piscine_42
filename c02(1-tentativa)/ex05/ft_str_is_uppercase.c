/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazampie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:40:21 by cazampie          #+#    #+#             */
/*   Updated: 2024/07/24 12:44:51 by cazampie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char    x[] = "CAROLINA";
        char    y[] = "";
        char    z[] = "carol <3";

        printf("%s %d\n", x, ft_str_is_uppercase(x));
        printf("%s %d\n", y, ft_str_is_uppercase(y));
        printf("%s %d\n", z, ft_str_is_uppercase(z));
        return (0);
}*/
