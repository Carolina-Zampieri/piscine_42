/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazampie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:50:09 by cazampie          #+#    #+#             */
/*   Updated: 2024/07/20 11:56:32 by cazampie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 12;
	y = 4;
	
	ft_swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);
	return (0);
}*/
