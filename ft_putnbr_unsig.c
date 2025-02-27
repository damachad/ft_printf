/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:24:49 by damachad          #+#    #+#             */
/*   Updated: 2023/05/04 14:03:05 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printnumb(unsigned int x, int *count)
{
	if (x < 10)
	{
		*count += ft_putchar_2(x + 48);
		return ;
	}
	else
		ft_printnumb(x / 10, count);
	ft_printnumb(x % 10, count);
}

int	ft_putnbr_unsig(unsigned int nb)
{
	int	count;

	count = 0;
	ft_printnumb(nb, &count);
	return (count);
}
