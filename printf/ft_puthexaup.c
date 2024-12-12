/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:57:10 by mlemerci          #+#    #+#             */
/*   Updated: 2024/12/12 09:36:08 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexaup(unsigned int n)
{
	int		i;
	char	*hexa;

	hexa = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
		i += ft_puthexaup(n / 16);
	i += ft_putchar(hexa[n % 16]);
	return (i);
}
/*
int	main(void)
{
	ft_puthexaup(42);
}*/