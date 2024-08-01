/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazampie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:31:36 by cazampie          #+#    #+#             */
/*   Updated: 2024/07/24 12:41:15 by cazampie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char    x[] = "power";
        char    y[] = "";
        char    z[] = "H3LL0!";

        printf("%s %d\n", x, ft_str_is_lowercase(x));
        printf("%s %d\n", y, ft_str_is_lowercase(y));
        printf("%s %d\n", z, ft_str_is_lowercase(z));
        return (0);
}*/
