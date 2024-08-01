/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazampie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:10:52 by cazampie          #+#    #+#             */
/*   Updated: 2024/07/25 11:36:04 by cazampie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	x[] = "Carol";
	char	y[] = "";
	char	z[] = "123456!";

	printf("%s %d\n", x, ft_str_is_alpha(x));
	printf("%s %d\n", y, ft_str_is_alpha(y));
	printf("%s %d\n", z, ft_str_is_alpha(z));
	return (0);
}*/
