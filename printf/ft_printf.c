/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 01:51:54 by mlemerci          #+#    #+#             */
/*   Updated: 2024/12/12 09:37:49 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if ((c == 'd') || (c == 'i'))
		count += ft_putnbr(va_arg(args, int));
	if (c == 's')
		count += ft_putstr(va_arg(args, const char *));
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	if (c == 'p')
		count += ft_putadress(va_arg(args, void *));
	if (c == 'u')
		count += ft_putunsignnbr(va_arg(args, unsigned int));
	if (c == 'x')
		count += ft_puthexalow(va_arg(args, unsigned int));
	if (c == 'X')
		count += ft_puthexaup(va_arg(args, unsigned int));
	if (c == '%')
		count += write(1, &c, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			count += ft_format(args, format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	// printf ("%%%, ainsi que "%p\n");
// 	ft_printf("je teste d'imprimer 42 de mon putnbr %d\n", 42);
// 	printf("je teste d'imprimer 42 de mon putnbr %s\n", "salut");
// 	// ft_printf ("%%%, ainsi que "%p\n");
// }
