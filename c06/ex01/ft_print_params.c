/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazampie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:46:07 by cazampie          #+#    #+#             */
/*   Updated: 2024/08/01 12:26:11 by cazampie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	if (argc > 1)
	{
		x = 1;
		while (x < argc)
		{
			i = 0;
			while (argv[x][i])
			{
				write (1, &argv[x][i], 1);
				i++;
			}
			write (1, "\n", 1);
			x++;
		}
	}
	return (0);
}
