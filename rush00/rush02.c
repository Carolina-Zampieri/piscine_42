/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:48:06 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/13 16:11:40 by mida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			if ((line == 0 && column == 0) || (line == 0 && column == x - 1))
				ft_putchar('A');
			else if ((line == y - 1 && column == 0)
				|| (line == y - 1 && column == x - 1))
				ft_putchar('C');
			else if (line == 0 || line == y - 1
				|| column == 0 || column == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
	line++;
	}
}
