/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazampie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:21:16 by cazampie          #+#    #+#             */
/*   Updated: 2024/07/30 15:32:38 by cazampie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[y] != '\0')
	{
		y ++;
	}
	while (src[x] != '\0' && x < nb)
	{
		dest[y + x] = src[x];
		x++;
	}
	dest[y + x] = '\0';
	return (dest);
}

/*int	main(void)
{
	unsigned int	nb = 2;
	char	src[] = "World";
	char	dest[] = "Hello ";

	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
	return (0);
}*/
