/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazampie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:28:22 by cazampie          #+#    #+#             */
/*   Updated: 2024/07/22 17:59:28 by cazampie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src);
}

/*int	main(void)
{
	char	src[] = "Olá";
	char	dest[] = "Carol";
	
	ft_strcpy(dest, src);
	printf("destino = %s\n", dest);
	return (0);
}*/
