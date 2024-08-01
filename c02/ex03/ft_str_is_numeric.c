/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazampie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:10:44 by cazampie          #+#    #+#             */
/*   Updated: 2024/07/24 14:14:34 by cazampie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	x[] = "123456";
	char	y[] = "Carolina";
	char    z[] = "";

	printf("%s %d\n", x, ft_str_is_numeric(x));
	printf("%s %d\n", y, ft_str_is_numeric(y));
	printf("%s %d\n", z, ft_str_is_numeric(z));
	return (0);
}*/
