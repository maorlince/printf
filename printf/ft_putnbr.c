/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:46:31 by mlemerci          #+#    #+#             */
/*   Updated: 2024/12/12 09:36:13 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		i;
	char	*nbr;

	i = 0;
	nbr = "0123456789";
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		i += ft_putnbr(n / 10);
	i += ft_putchar(nbr[n % 10]);
	return (i);
}
