/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexalow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:50:32 by mlemerci          #+#    #+#             */
/*   Updated: 2024/12/12 09:36:02 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexalow(unsigned int n)
{
	int		i;
	char	*hexa;

	hexa = "0123456789abcdef";
	i = 0;
	if (n >= 16)
		i += ft_puthexalow(n / 16);
	i += ft_putchar(hexa[n % 16]);
	return (i);
}
